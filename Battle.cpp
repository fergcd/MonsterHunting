#include "Header.h"

void Battle(eCharacterName characterName, sCharacter* character)	//전투
{
	char MSG[200];	//메세지를 저장할 문자열
	int turn = 1;
	int x = 10;
	int decide = 0;
	int previousPlayerHP;
	int previousMonsterHP;
	int previousMonsterAP;	//turn은 플레이어와 몬스터가 번갈아가며 공격하게 만들기 위해 쓰이는 변수
	int dummy = 0;

	CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerNormal);
	StateDisplay((int)eCharacterName::Player, character, 0, character[0].AttackPoint, 40, 15);

	CharacterDisplay(characterName, character);
	StateDisplay((int)characterName, character, 0, character[(int)characterName].AttackPoint, 5, 2);

	eraseMSG();

	//메세지출력 사이즈 (4, 22)~(75, 24)	
	sprintf_s(MSG, "%s이(가) 나타났다!", character[(int)characterName].name);
	outputMSG(MSG);

	getch_eraseMSG();

	for (; character[0].HealthPoint > 0 && character[(int)characterName].HealthPoint > 0;)	//플레이어와 몬스터 둘 중 하나라도 체력이 0 이하가 되면 for문을 빠져나갑니다.
	{
		previousPlayerHP = character[0].HealthPoint;
		previousMonsterHP = character[(int)characterName].HealthPoint;
		previousMonsterAP = character[(int)characterName].AttackPoint;

		if (turn == 1)
		{
			CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerNormal);
			gotoxy(4, 22);
			printf("뭐할래?");
			gotoxy(10, 23);
			printf("공격");

			ItemDeactivate(20, 1, character);
			ItemDeactivate(30, 2, character);
			ItemDeactivate(40, 7, character);
			ItemDeactivate(50, 8, character);
			ItemDeactivate(60, 0, character);

			/*
			gotoxy(1, 21);
			printf(" ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
			printf(" ┃000000111111111122222222223333333333444444444455555555556666666666777777┃\n");
			printf(" ┃456789공격456789짱돌456789꽃23456789수류탄6789도발456789필살기6789012345┃\n");	//3(7, 23), (26, 23), (45, 23), (64, 23){70}3 공백72칸 간격19
			printf(" ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
			gotoxy(4, 22);
			*/
			gotoxy(10, 23);
			while (decide == 0)
			{
				switch (_getch())	//3(7, 23), (26, 23), (45, 23), (64, 23){70}3 공백72칸 간격19
				{
				case 75:	//왼쪽
					if (x >= 20 && x <= 60)
					{
						x -= 10;
					}
					break;
				case 77:	//오른쪽
					if (x >= 10 && x <= 50)
					{
						x += 10;
					}
					break;
				case 13:	//엔터
					switch (x)	//case 26, 45, 64는 함수로 만들어야게썽?
					{
					case 10:	//공격
						decide = 1;
						turn++;	//turn = 2 가 되므로 다음 for문에서는 if문의 문장은 넘어가고 else문의 문장으로 넘어갈 수 있습니다.
						eraseMSG();
						if(eCharacterName::Gandhi == characterName && 0 == character[(int)characterName].AttackPoint)
						{
							break;
						}
						printf("%s이(가) %s을(를) 때렸습니다.", character[0].name, character[(int)characterName].name);
						CharacterAttack(eCharacterName::Player, character);
						CharacterBlink(characterName, character, RED);
						character[(int)characterName].HealthPoint -= character[0].AttackPoint;	//몬스터의 체력이 플레이어의 공격력만큼 깎입니다.
						Adjust_NegativeHealthPoint_To_Zero((int)characterName, character);
						StateDisplay((int)characterName, character, previousMonsterHP, character[(int)characterName].AttackPoint, 5, 2);
						break;
					case 20:	//나무뿌리 -> 짱돌로 변경
						if(character[1].HealthPoint <= 0)
						{
							decide = 1;
							turn++;
							eraseMSG();
							if (eCharacterName::Gandhi == characterName && character[(int)characterName].AttackPoint == 0)
							{
								break;
							}
							printf("%s이(가) %s에게 짱돌을 던졌습니다.", character[0].name, character[(int)characterName].name);
							Use_Item_or_Skill(character[(int)characterName].x, character[(int)characterName].y, characterName, character);
							if(eCharacterName::Billy == characterName)	//존슨˚Д˚ 60, 10	얼굴 62~64, 6
							{
								Blink("˚Д˚", 60, 10, RED);
								eraseMSG();
								printf("하필이면 짱돌이 영 좋지 않은 곳에 맞았습니다.");
								getch_eraseMSG();
								printf("%s는 앞으로 아이를 가질 수가 없습니다.", character[(int)characterName].name);
								character[(int)characterName].HealthPoint = 0;
								StateDisplay((int)characterName, character, previousMonsterHP, character[(int)characterName].AttackPoint, 5, 2);
								eraseMSG();
								printf("%s: 내가...내가 고자라니...", character[(int)characterName].name);
							}
							else
							{
								CharacterBlink(characterName, character, RED);
								character[(int)characterName].HealthPoint -= 1;
								Adjust_NegativeHealthPoint_To_Zero((int)characterName, character);
								StateDisplay((int)characterName, character, previousMonsterHP, character[(int)characterName].AttackPoint, 5, 2);
							}
						}
						break;
					case 30:	//꽃
						if (character[2].HealthPoint <= 0)
						{
							decide = 1;
							turn++;
							eraseMSG();
							if (eCharacterName::Gandhi == characterName && character[(int)characterName].AttackPoint == 0)
							{
								break;
							}
							printf("%s이(가) %s을 먹었습니다.", character[0].name, character[2].name);
							ItemAcquire(12, character);
							dummy = _getch();
							eraseMSG();
							printf("맛은 별로였습니다.");
							CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerDisappointed);
						}
						break;
					case 40:	//수류탄
						if(character[7].HealthPoint <= 0)
						{
							decide = 1;
							turn++;
							eraseMSG();
							if (eCharacterName::Gandhi == characterName && 0 == character[(int)characterName].AttackPoint)
							{
								break;
							}
							printf("%s이(가) %s을 먹었습니다.", character[0].name, character[7].name);
							ItemAcquire(17, character);
							eraseMSG();
							printf("%s의 뱃속에 있던 %s이 터졌습니다.", character[0].name, character[7].name);
							CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerWhatThe);
							boom();
							eraseMSG();
							printf("%s은(는) 매우 아파서 체력이 20 떨어졌습니다.", character[0].name);							
							character[0].HealthPoint -= 20;
							Adjust_NegativeHealthPoint_To_Zero(0, character);
							StateDisplay(0, character, previousPlayerHP, character[0].AttackPoint, 40, 15);
						}
						break;
					case 50:	//도발
						if(character[8].HealthPoint <= 0)
						{
							decide = 1;
							turn++;
							eraseMSG();
							printf("%s이(가) %s에게 도발을 했습니다.", character[0].name, character[(int)characterName].name);
							Use_Item_or_Skill(1, 1, characterName, character);
							eraseMSG();
							if (eCharacterName::Gandhi == characterName && 0 == character[(int)characterName].AttackPoint)
							{
								printf("%s: ...", character[(int)characterName].name);
								dummy = _getch();
								CharacterExpression(characterName, character, eCharacterExpression::GandhiPissedOff);
								eraseMSG();
								printf("%s: 순순히 사과하면 유혈사태는 일어나지 않을 것입니다.", character[(int)characterName].name);
								getch_eraseMSG();
								CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerWhatThe);
								CharacterBlink(characterName, character, LIGHTMAGENTA);
								character[(int)characterName].HealthPoint = 66;
								character[(int)characterName].MaxHealthPoint = 66;
								character[(int)characterName].AttackPoint = character[0].HealthPoint - 1;
							}
							else if(characterName == eCharacterName::Gandhi)
							{
								printf("%s: 죽어야 정신을 차리겠군.", character[(int)characterName].name);
								getch_eraseMSG();
								CharacterExpression(characterName, character, eCharacterExpression::GandhiSuperSaiyan);
								CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerWhatThe);
								CharacterBlink(characterName, character, YELLOW);
								character[(int)characterName].AttackPoint = 444;
							}
							else
							{
								printf("%s이(가) 화를 내기 시작했습니다.", character[(int)characterName].name);
								getch_eraseMSG();
								printf("%s의 공격력이 5 상승했습니다.", character[(int)characterName].name);
								CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerWhatThe);
								CharacterBlink(characterName, character, LIGHTBLUE);
								character[(int)characterName].AttackPoint += 5;
							}
							StateDisplay((int)characterName, character, previousMonsterHP , previousMonsterAP, 5, 2);
						}
						break;
					case 60:	//필살기
						if(KillingCount >= 9 && character[0].HealthPoint == 1)
						{
							decide = 1;
							turn++;
							eraseMSG();
							if (eCharacterName::Gandhi == characterName && 0 == character[(int)characterName].AttackPoint)
							{
								break;
							}
							printf("%s이(가) %s에게 필살기를 썼습니다.", character[0].name, character[(int)characterName].name);
							Use_Item_or_Skill(0, 0, characterName, character);
							character[(int)characterName].HealthPoint = 0;
							StateDisplay((int)characterName, character, previousMonsterHP, character[(int)characterName].AttackPoint, 5, 2);
							eraseMSG();
							printf("%s: 신발...", character[(int)characterName].name);
						}
						break;
					}
					break;
				default:
					break;
				}				
				gotoxy(x, 23);
			}
			decide = 0;
			if (eCharacterName::Gandhi == characterName && 0 == character[(int)characterName].AttackPoint && x != 50)
			{
				gotoxy(4, 22);
				printf("%s는 무저항 비폭력 주의자이기 때문에 강제로 전투를 종료시켰습니다.", character[(int)characterName].name);
				dummy = _getch();
				break;
			}
		}
		else
		{
			if (characterName == eCharacterName::GrassHopper)
			{
				CharacterExpression(characterName, character, eCharacterExpression::GrassHopperNormal);
			}
			else if (characterName == eCharacterName::CamelCriket)
			{
				CharacterExpression(characterName, character, eCharacterExpression::CamelCriketNormal);
			}
			eraseMSG();
			if (characterName == eCharacterName::Gandhi && character[(int)characterName].AttackPoint == 444)
			{
				corn();
				CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerFatalKilled);
			}
			else
			{
				printf("%s이(가) %s을(를) 때렸습니다.", character[(int)characterName].name, character[0].name);
				CharacterDisplay(characterName, character);
				CharacterAttack(characterName, character);
				CharacterBlink(eCharacterName::Player, character, RED);
			}
			character[0].HealthPoint -= character[(int)characterName].AttackPoint;	//플레이어의 체력이 몬스터의 공격력만큼 깎입니다.
			Adjust_NegativeHealthPoint_To_Zero(0, character);
			turn--;	//2였던 turn이 다시 1이 되므로 다음 for문에서는 다시 if문의 문장을 읽습니다.
			StateDisplay(0, character, previousPlayerHP, character[0].AttackPoint, 40, 15);
		}
		if (characterName == eCharacterName::Gandhi && character[(int)characterName].AttackPoint == 444)
		{
			eraseMSG();
			Sleep(1000);
		}
		else
		{
			getch_eraseMSG();
		}

		if(character[(int)characterName].HealthPoint <= 0)	//몬스터 패배
		{
			KillingCount++;
			printf("%s을(를) 이겼습니다.", character[(int)characterName].name);
			switch(characterName)
			{
			case eCharacterName::GrassHopper:
				CharacterExpression(characterName, character, eCharacterExpression::GrassHopperDead);
				break;
			case eCharacterName::Billy:
				if(x == 20)
				{
					CharacterExpression(characterName, character, eCharacterExpression::BillyGozaDead);
				}
				else
				{
					CharacterExpression(characterName, character, eCharacterExpression::BillyNormalDead);
				}
				break;
			case eCharacterName::CamelCriket:
				CharacterExpression(characterName, character, eCharacterExpression::CamelCriketDead);
				break;
			case eCharacterName::Gandhi:
				CharacterExpression(characterName, character, eCharacterExpression::GandhiDead);
				break;
			default:
				break;
			}
			CharacterDown(characterName, character);
			Reward(characterName, character);
		}
		if(character[0].HealthPoint <= 0)	//플레이어 패배
		{
			printf("당신은 패배했습니다.");
			if (characterName == eCharacterName::Gandhi && character[(int)characterName].AttackPoint == 444)
			{
				CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerFatalKilled);
			}
			else
			{
				CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerDead);
			}
			CharacterDown(eCharacterName::Player, character);
			if(x == 40)
			{
				getch_eraseMSG();
				printf("%s: ㅋㅋㅋ", character[(int)characterName].name);
			}
			dummy = _getch();
		}

		x = 10;
	}

	system("cls");
}