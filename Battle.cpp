#include "Header.h"

void Battle(eCharacterName characterName, sCharacter* character)	//����
{
	char MSG[200];	//�޼����� ������ ���ڿ�
	int turn = 1;
	int x = 10;
	int decide = 0;
	int previousPlayerHP;
	int previousMonsterHP;
	int previousMonsterAP;	//turn�� �÷��̾�� ���Ͱ� �����ư��� �����ϰ� ����� ���� ���̴� ����
	int dummy = 0;

	CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerNormal);
	StateDisplay((int)eCharacterName::Player, character, 0, character[0].AttackPoint, 40, 15);

	CharacterDisplay(characterName, character);
	StateDisplay((int)characterName, character, 0, character[(int)characterName].AttackPoint, 5, 2);

	eraseMSG();

	//�޼������ ������ (4, 22)~(75, 24)	
	sprintf_s(MSG, "%s��(��) ��Ÿ����!", character[(int)characterName].name);
	outputMSG(MSG);

	getch_eraseMSG();

	for (; character[0].HealthPoint > 0 && character[(int)characterName].HealthPoint > 0;)	//�÷��̾�� ���� �� �� �ϳ��� ü���� 0 ���ϰ� �Ǹ� for���� ���������ϴ�.
	{
		previousPlayerHP = character[0].HealthPoint;
		previousMonsterHP = character[(int)characterName].HealthPoint;
		previousMonsterAP = character[(int)characterName].AttackPoint;

		if (turn == 1)
		{
			CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerNormal);
			gotoxy(4, 22);
			printf("���ҷ�?");
			gotoxy(10, 23);
			printf("����");

			ItemDeactivate(20, 1, character);
			ItemDeactivate(30, 2, character);
			ItemDeactivate(40, 7, character);
			ItemDeactivate(50, 8, character);
			ItemDeactivate(60, 0, character);

			/*
			gotoxy(1, 21);
			printf(" ����������������������������������������������������������������������������\n");
			printf(" ��000000111111111122222222223333333333444444444455555555556666666666777777��\n");
			printf(" ��456789����456789¯��456789��23456789����ź6789����456789�ʻ��6789012345��\n");	//3(7, 23), (26, 23), (45, 23), (64, 23){70}3 ����72ĭ ����19
			printf(" ����������������������������������������������������������������������������");
			gotoxy(4, 22);
			*/
			gotoxy(10, 23);
			while (decide == 0)
			{
				switch (_getch())	//3(7, 23), (26, 23), (45, 23), (64, 23){70}3 ����72ĭ ����19
				{
				case 75:	//����
					if (x >= 20 && x <= 60)
					{
						x -= 10;
					}
					break;
				case 77:	//������
					if (x >= 10 && x <= 50)
					{
						x += 10;
					}
					break;
				case 13:	//����
					switch (x)	//case 26, 45, 64�� �Լ��� �����߰Խ�?
					{
					case 10:	//����
						decide = 1;
						turn++;	//turn = 2 �� �ǹǷ� ���� for�������� if���� ������ �Ѿ�� else���� �������� �Ѿ �� �ֽ��ϴ�.
						eraseMSG();
						if(eCharacterName::Gandhi == characterName && 0 == character[(int)characterName].AttackPoint)
						{
							break;
						}
						printf("%s��(��) %s��(��) ���Ƚ��ϴ�.", character[0].name, character[(int)characterName].name);
						CharacterAttack(eCharacterName::Player, character);
						CharacterBlink(characterName, character, RED);
						character[(int)characterName].HealthPoint -= character[0].AttackPoint;	//������ ü���� �÷��̾��� ���ݷ¸�ŭ ���Դϴ�.
						Adjust_NegativeHealthPoint_To_Zero((int)characterName, character);
						StateDisplay((int)characterName, character, previousMonsterHP, character[(int)characterName].AttackPoint, 5, 2);
						break;
					case 20:	//�����Ѹ� -> ¯���� ����
						if(character[1].HealthPoint <= 0)
						{
							decide = 1;
							turn++;
							eraseMSG();
							if (eCharacterName::Gandhi == characterName && character[(int)characterName].AttackPoint == 0)
							{
								break;
							}
							printf("%s��(��) %s���� ¯���� �������ϴ�.", character[0].name, character[(int)characterName].name);
							Use_Item_or_Skill(character[(int)characterName].x, character[(int)characterName].y, characterName, character);
							if(eCharacterName::Billy == characterName)	//���������� 60, 10	�� 62~64, 6
							{
								Blink("������", 60, 10, RED);
								eraseMSG();
								printf("�����̸� ¯���� �� ���� ���� ���� �¾ҽ��ϴ�.");
								getch_eraseMSG();
								printf("%s�� ������ ���̸� ���� ���� �����ϴ�.", character[(int)characterName].name);
								character[(int)characterName].HealthPoint = 0;
								StateDisplay((int)characterName, character, previousMonsterHP, character[(int)characterName].AttackPoint, 5, 2);
								eraseMSG();
								printf("%s: ����...���� ���ڶ��...", character[(int)characterName].name);
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
					case 30:	//��
						if (character[2].HealthPoint <= 0)
						{
							decide = 1;
							turn++;
							eraseMSG();
							if (eCharacterName::Gandhi == characterName && character[(int)characterName].AttackPoint == 0)
							{
								break;
							}
							printf("%s��(��) %s�� �Ծ����ϴ�.", character[0].name, character[2].name);
							ItemAcquire(12, character);
							dummy = _getch();
							eraseMSG();
							printf("���� ���ο����ϴ�.");
							CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerDisappointed);
						}
						break;
					case 40:	//����ź
						if(character[7].HealthPoint <= 0)
						{
							decide = 1;
							turn++;
							eraseMSG();
							if (eCharacterName::Gandhi == characterName && 0 == character[(int)characterName].AttackPoint)
							{
								break;
							}
							printf("%s��(��) %s�� �Ծ����ϴ�.", character[0].name, character[7].name);
							ItemAcquire(17, character);
							eraseMSG();
							printf("%s�� ��ӿ� �ִ� %s�� �������ϴ�.", character[0].name, character[7].name);
							CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerWhatThe);
							boom();
							eraseMSG();
							printf("%s��(��) �ſ� ���ļ� ü���� 20 ���������ϴ�.", character[0].name);							
							character[0].HealthPoint -= 20;
							Adjust_NegativeHealthPoint_To_Zero(0, character);
							StateDisplay(0, character, previousPlayerHP, character[0].AttackPoint, 40, 15);
						}
						break;
					case 50:	//����
						if(character[8].HealthPoint <= 0)
						{
							decide = 1;
							turn++;
							eraseMSG();
							printf("%s��(��) %s���� ������ �߽��ϴ�.", character[0].name, character[(int)characterName].name);
							Use_Item_or_Skill(1, 1, characterName, character);
							eraseMSG();
							if (eCharacterName::Gandhi == characterName && 0 == character[(int)characterName].AttackPoint)
							{
								printf("%s: ...", character[(int)characterName].name);
								dummy = _getch();
								CharacterExpression(characterName, character, eCharacterExpression::GandhiPissedOff);
								eraseMSG();
								printf("%s: ������ ����ϸ� �������´� �Ͼ�� ���� ���Դϴ�.", character[(int)characterName].name);
								getch_eraseMSG();
								CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerWhatThe);
								CharacterBlink(characterName, character, LIGHTMAGENTA);
								character[(int)characterName].HealthPoint = 66;
								character[(int)characterName].MaxHealthPoint = 66;
								character[(int)characterName].AttackPoint = character[0].HealthPoint - 1;
							}
							else if(characterName == eCharacterName::Gandhi)
							{
								printf("%s: �׾�� ������ �����ڱ�.", character[(int)characterName].name);
								getch_eraseMSG();
								CharacterExpression(characterName, character, eCharacterExpression::GandhiSuperSaiyan);
								CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerWhatThe);
								CharacterBlink(characterName, character, YELLOW);
								character[(int)characterName].AttackPoint = 444;
							}
							else
							{
								printf("%s��(��) ȭ�� ���� �����߽��ϴ�.", character[(int)characterName].name);
								getch_eraseMSG();
								printf("%s�� ���ݷ��� 5 ����߽��ϴ�.", character[(int)characterName].name);
								CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerWhatThe);
								CharacterBlink(characterName, character, LIGHTBLUE);
								character[(int)characterName].AttackPoint += 5;
							}
							StateDisplay((int)characterName, character, previousMonsterHP , previousMonsterAP, 5, 2);
						}
						break;
					case 60:	//�ʻ��
						if(KillingCount >= 9 && character[0].HealthPoint == 1)
						{
							decide = 1;
							turn++;
							eraseMSG();
							if (eCharacterName::Gandhi == characterName && 0 == character[(int)characterName].AttackPoint)
							{
								break;
							}
							printf("%s��(��) %s���� �ʻ�⸦ ����ϴ�.", character[0].name, character[(int)characterName].name);
							Use_Item_or_Skill(0, 0, characterName, character);
							character[(int)characterName].HealthPoint = 0;
							StateDisplay((int)characterName, character, previousMonsterHP, character[(int)characterName].AttackPoint, 5, 2);
							eraseMSG();
							printf("%s: �Ź�...", character[(int)characterName].name);
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
				printf("%s�� ������ ������ �������̱� ������ ������ ������ ������׽��ϴ�.", character[(int)characterName].name);
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
				printf("%s��(��) %s��(��) ���Ƚ��ϴ�.", character[(int)characterName].name, character[0].name);
				CharacterDisplay(characterName, character);
				CharacterAttack(characterName, character);
				CharacterBlink(eCharacterName::Player, character, RED);
			}
			character[0].HealthPoint -= character[(int)characterName].AttackPoint;	//�÷��̾��� ü���� ������ ���ݷ¸�ŭ ���Դϴ�.
			Adjust_NegativeHealthPoint_To_Zero(0, character);
			turn--;	//2���� turn�� �ٽ� 1�� �ǹǷ� ���� for�������� �ٽ� if���� ������ �н��ϴ�.
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

		if(character[(int)characterName].HealthPoint <= 0)	//���� �й�
		{
			KillingCount++;
			printf("%s��(��) �̰���ϴ�.", character[(int)characterName].name);
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
		if(character[0].HealthPoint <= 0)	//�÷��̾� �й�
		{
			printf("����� �й��߽��ϴ�.");
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
				printf("%s: ������", character[(int)characterName].name);
			}
			dummy = _getch();
		}

		x = 10;
	}

	system("cls");
}