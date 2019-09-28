#include"Header.h"

void Battle(int index, sCharacter* character)	//전투
{
	char MSG[200];	//메세지를 저장할 문자열
	int turn = 1, x = 10, decide = 0, previousPlayerHP, previousMonsterHP, previousMonsterAP;	//turn은 플레이어와 몬스터가 번갈아가며 공격하게 만들기 위해 쓰이는 변수

	CharacterExpression(0, character, 0);
	StateDisplay(0, character, 0, character[0].AttackPoint, 40, 15);

	CharacterDisplay(index, character);
	StateDisplay(index, character, 0, character[index].AttackPoint, 5, 2);

	eraseMSG();

	//메세지출력 사이즈 (4, 22)~(75, 24)
	//printf("%s이(가) 나타났다!", character[index].name);
	sprintf(MSG, "%s이(가) 나타났다!", character[index].name);
	outputMSG(MSG);

	getch_eraseMSG();
	//gotoxy(71, 23);
	//printf("끝임");

	for(; character[0].HealthPoint > 0 && character[index].HealthPoint > 0;)	//플레이어와 몬스터 둘 중 하나라도 체력이 0 이하가 되면 for문을 빠져나갑니다.
	{
		previousPlayerHP = character[0].HealthPoint;
		previousMonsterHP = character[index].HealthPoint;
		previousMonsterAP = character[index].AttackPoint;

		if(turn == 1)
		{
			CharacterExpression(0, character, 0);
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
			while(decide == 0)
			{
				switch(getch())	//3(7, 23), (26, 23), (45, 23), (64, 23){70}3 공백72칸 간격19
				{
				case 75:	//왼쪽
					if(x >= 20 && x <= 60)
						x -= 10;
					break;
				case 77:	//오른쪽
					if(x >= 10 && x <= 50)
						x += 10;
					break;
				case 13:	//엔터
					switch(x)	//case 26, 45, 64는 함수로 만들어야게썽?
					{
					case 10:	//공격
						decide = 1;
						turn++;	//turn = 2 가 되므로 다음 for문에서는 if문의 문장은 넘어가고 else문의 문장으로 넘어갈 수 있습니다.
						eraseMSG();
						if(index == 10 && character[index].AttackPoint == 0)
							break;
						printf("%s이(가) %s을(를) 때렸습니다.", character[0].name, character[index].name);
						CharacterAttack(0, character);
						CharacterBlink(index, character, 4);
						character[index].HealthPoint -= character[0].AttackPoint;	//몬스터의 체력이 플레이어의 공격력만큼 깎입니다.
						Adjust_NegativeHealthPoint_To_Zero(index, character);
						StateDisplay(index, character, previousMonsterHP, character[index].AttackPoint, 5, 2);
						break;
					case 20:	//나무뿌리 -> 짱돌로 변경
						if(character[1].HealthPoint <= 0)
						{
							decide = 1;
							turn++;
							eraseMSG();
							if(index == 10 && character[index].AttackPoint == 0)
								break;
							printf("%s이(가) %s에게 짱돌을 던졌습니다.", character[0].name, character[index].name);
							Use_Item_or_Skill(character[index].x, character[index].y, index, character);
							if(index == 8)	//존슨˚Д˚ 60, 10	얼굴 62~64, 6
							{
								Blink("˚Д˚", 60, 10, 4);
								eraseMSG();
								printf("하필이면 짱돌이 영 좋지 않은 곳에 맞았습니다.");
								getch_eraseMSG();
								printf("%s는 앞으로 아이를 가질 수가 없습니다.", character[index].name);
								character[index].HealthPoint = 0;
								StateDisplay(index, character, previousMonsterHP, character[index].AttackPoint, 5, 2);
								eraseMSG();
								printf("%s: 내가...내가 고자라니...", character[index].name);
							}
							else
							{
								CharacterBlink(index, character, 4);
								character[index].HealthPoint -= 1;
								Adjust_NegativeHealthPoint_To_Zero(index, character);
								StateDisplay(index, character, previousMonsterHP, character[index].AttackPoint, 5, 2);
							}
						}
						break;
					case 30:	//꽃
						if(character[2].HealthPoint <= 0)
						{
							decide = 1;
							turn++;
							eraseMSG();
							if(index == 10 && character[index].AttackPoint == 0)
								break;
							printf("%s이(가) %s을 먹었습니다.", character[0].name, character[2].name);
							ItemAcquire(12, character);
							getch();
							eraseMSG();
							printf("맛은 별로였습니다.");
							CharacterExpression(0, character, 1);
						}
						break;
					case 40:	//수류탄
						if(character[7].HealthPoint <= 0)
						{
							decide = 1;
							turn++;
							eraseMSG();
							if(index == 10 && character[index].AttackPoint == 0)
								break;
							printf("%s이(가) %s을 먹었습니다.", character[0].name, character[7].name);
							ItemAcquire(17, character);
							eraseMSG();
							printf("%s의 뱃속에 있던 %s이 터졌습니다.", character[0].name, character[7].name);
							CharacterExpression(0, character, 14);
							boom();
							eraseMSG();
							printf("%s은(는) 매우 아파서 체력이 20 떨어졌습니다.", character[0].name);
							//CharacterBlink(0, character, 4);
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
							printf("%s이(가) %s에게 도발을 했습니다.", character[0].name, character[index].name);
							Use_Item_or_Skill(1, 1, index, character);
							eraseMSG();
							if(index == 10 && character[index].AttackPoint == 0)
							{
								printf("%s: ...", character[index].name);
								getch();
								CharacterExpression(index, character, 69);
								eraseMSG();
								printf("%s: 순순히 사과하면 유혈사태는 일어나지 않을 것입니다.", character[index].name);
								getch_eraseMSG();
								CharacterExpression(0, character, 14);
								CharacterBlink(index, character, 13);
								character[index].HealthPoint = 66;
								character[index].MaxHealthPoint = 66;
								character[index].AttackPoint = character[0].HealthPoint - 1;
							}
							else if(index == 10)
							{
								printf("%s: 죽어야 정신을 차리겠군.", character[index].name);
								getch_eraseMSG();
								CharacterExpression(index, character, 6969);
								CharacterExpression(0, character, 14);
								CharacterBlink(index, character, 14);
								character[index].AttackPoint = 444;
							}
							else
							{
								printf("%s이(가) 화를 내기 시작했습니다.", character[index].name);
								getch_eraseMSG();
								printf("%s의 공격력이 5 상승했습니다.", character[index].name);
								CharacterExpression(0, character, 14);
								CharacterBlink(index, character, 9);
								character[index].AttackPoint += 5;
							}
							StateDisplay(index, character, previousMonsterHP , previousMonsterAP, 5, 2);
						}
						break;
					case 60:	//필살기
						if(KillingCount >= 9 && character[0].HealthPoint == 1)
						{
							decide = 1;
							turn++;
							eraseMSG();
							if(index == 10 && character[index].AttackPoint == 0)
								break;
							printf("%s이(가) %s에게 필살기를 썼습니다.", character[0].name, character[index].name);
							Use_Item_or_Skill(0, 0, index, character);
							character[index].HealthPoint = 0;
							StateDisplay(index, character, previousMonsterHP, character[index].AttackPoint, 5, 2);
							eraseMSG();
							//gotoxy(4, 22);
							printf("%s: 신발...", character[index].name);
						}
						break;
					}
					break;
				default:
					break;
				}
				//gotoxy(60, 22);
				//printf("x: %2d", x);
				gotoxy(x, 23);
			}
			decide = 0;
			if(index == 10 && character[index].AttackPoint == 0 && x != 50)
			{
				gotoxy(4, 22);
				printf("%s는 무저항 비폭력 주의자이기 때문에 강제로 전투를 종료시켰습니다.", character[index].name);
				getch();
				break;
			}
		}
		else
		{
			if(index == 5)
				CharacterExpression(index, character, 50);
			else if(index == 9)
				CharacterExpression(index, character, 90);
			eraseMSG();
			if(index == 10 && character[index].AttackPoint == 444)
			{
				corn();
				CharacterExpression(0, character, 4444);
			}
			else
			{
				printf("%s이(가) %s을(를) 때렸습니다.", character[index].name, character[0].name);
				CharacterDisplay(index, character);
				CharacterAttack(index, character);
				CharacterBlink(0, character, 4);
			}
			character[0].HealthPoint -= character[index].AttackPoint;	//플레이어의 체력이 몬스터의 공격력만큼 깎입니다.
			Adjust_NegativeHealthPoint_To_Zero(0, character);
			turn--;	//2였던 turn이 다시 1이 되므로 다음 for문에서는 다시 if문의 문장을 읽습니다.
			StateDisplay(0, character, previousPlayerHP, character[0].AttackPoint, 40, 15);
		}
		if(index == 10 && character[index].AttackPoint == 444)
		{
			eraseMSG();
			Sleep(1000);
		}
		else
			getch_eraseMSG();

		if(character[index].HealthPoint <= 0)	//몬스터 패배
		{
			KillingCount++;
			printf("%s을(를) 이겼습니다.", character[index].name);
			switch(index)
			{
			case 5:
				CharacterExpression(index, character, 54);
				break;
			case 8:
				if(x == 20)
					CharacterExpression(index, character, 218);
				else
					CharacterExpression(index, character, 84);
				break;
			case 9:
				CharacterExpression(index, character, 94);
				break;
			case 10:
				CharacterExpression(index, character, 104);
				break;
			}
			CharacterDown(index, character);
			Reward(index, character);
		}
		if(character[0].HealthPoint <= 0)	//플레이어 패배
		{
			printf("당신은 패배했습니다.");
			if(index == 10 && character[index].AttackPoint == 444)
				CharacterExpression(0, character, 4444);
			else
				CharacterExpression(0, character, 444);
			CharacterDown(0, character);
			if(x == 40)
			{
				getch_eraseMSG();
				printf("%s: ㅋㅋㅋ", character[index].name);
			}
			getch();
		}

		x = 10;
	}

	system("cls");
}