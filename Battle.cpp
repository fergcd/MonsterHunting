#include"Header.h"

void Battle(int index, sCharacter* character)	//����
{
	char MSG[200];	//�޼����� ������ ���ڿ�
	int turn = 1, x = 10, decide = 0, previousPlayerHP, previousMonsterHP, previousMonsterAP;	//turn�� �÷��̾�� ���Ͱ� �����ư��� �����ϰ� ����� ���� ���̴� ����

	CharacterExpression(0, character, 0);
	StateDisplay(0, character, 0, character[0].AttackPoint, 40, 15);

	CharacterDisplay(index, character);
	StateDisplay(index, character, 0, character[index].AttackPoint, 5, 2);

	eraseMSG();

	//�޼������ ������ (4, 22)~(75, 24)
	//printf("%s��(��) ��Ÿ����!", character[index].name);
	sprintf(MSG, "%s��(��) ��Ÿ����!", character[index].name);
	outputMSG(MSG);

	getch_eraseMSG();
	//gotoxy(71, 23);
	//printf("����");

	for(; character[0].HealthPoint > 0 && character[index].HealthPoint > 0;)	//�÷��̾�� ���� �� �� �ϳ��� ü���� 0 ���ϰ� �Ǹ� for���� ���������ϴ�.
	{
		previousPlayerHP = character[0].HealthPoint;
		previousMonsterHP = character[index].HealthPoint;
		previousMonsterAP = character[index].AttackPoint;

		if(turn == 1)
		{
			CharacterExpression(0, character, 0);
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
			while(decide == 0)
			{
				switch(getch())	//3(7, 23), (26, 23), (45, 23), (64, 23){70}3 ����72ĭ ����19
				{
				case 75:	//����
					if(x >= 20 && x <= 60)
						x -= 10;
					break;
				case 77:	//������
					if(x >= 10 && x <= 50)
						x += 10;
					break;
				case 13:	//����
					switch(x)	//case 26, 45, 64�� �Լ��� �����߰Խ�?
					{
					case 10:	//����
						decide = 1;
						turn++;	//turn = 2 �� �ǹǷ� ���� for�������� if���� ������ �Ѿ�� else���� �������� �Ѿ �� �ֽ��ϴ�.
						eraseMSG();
						if(index == 10 && character[index].AttackPoint == 0)
							break;
						printf("%s��(��) %s��(��) ���Ƚ��ϴ�.", character[0].name, character[index].name);
						CharacterAttack(0, character);
						CharacterBlink(index, character, 4);
						character[index].HealthPoint -= character[0].AttackPoint;	//������ ü���� �÷��̾��� ���ݷ¸�ŭ ���Դϴ�.
						Adjust_NegativeHealthPoint_To_Zero(index, character);
						StateDisplay(index, character, previousMonsterHP, character[index].AttackPoint, 5, 2);
						break;
					case 20:	//�����Ѹ� -> ¯���� ����
						if(character[1].HealthPoint <= 0)
						{
							decide = 1;
							turn++;
							eraseMSG();
							if(index == 10 && character[index].AttackPoint == 0)
								break;
							printf("%s��(��) %s���� ¯���� �������ϴ�.", character[0].name, character[index].name);
							Use_Item_or_Skill(character[index].x, character[index].y, index, character);
							if(index == 8)	//���������� 60, 10	�� 62~64, 6
							{
								Blink("������", 60, 10, 4);
								eraseMSG();
								printf("�����̸� ¯���� �� ���� ���� ���� �¾ҽ��ϴ�.");
								getch_eraseMSG();
								printf("%s�� ������ ���̸� ���� ���� �����ϴ�.", character[index].name);
								character[index].HealthPoint = 0;
								StateDisplay(index, character, previousMonsterHP, character[index].AttackPoint, 5, 2);
								eraseMSG();
								printf("%s: ����...���� ���ڶ��...", character[index].name);
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
					case 30:	//��
						if(character[2].HealthPoint <= 0)
						{
							decide = 1;
							turn++;
							eraseMSG();
							if(index == 10 && character[index].AttackPoint == 0)
								break;
							printf("%s��(��) %s�� �Ծ����ϴ�.", character[0].name, character[2].name);
							ItemAcquire(12, character);
							getch();
							eraseMSG();
							printf("���� ���ο����ϴ�.");
							CharacterExpression(0, character, 1);
						}
						break;
					case 40:	//����ź
						if(character[7].HealthPoint <= 0)
						{
							decide = 1;
							turn++;
							eraseMSG();
							if(index == 10 && character[index].AttackPoint == 0)
								break;
							printf("%s��(��) %s�� �Ծ����ϴ�.", character[0].name, character[7].name);
							ItemAcquire(17, character);
							eraseMSG();
							printf("%s�� ��ӿ� �ִ� %s�� �������ϴ�.", character[0].name, character[7].name);
							CharacterExpression(0, character, 14);
							boom();
							eraseMSG();
							printf("%s��(��) �ſ� ���ļ� ü���� 20 ���������ϴ�.", character[0].name);
							//CharacterBlink(0, character, 4);
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
							printf("%s��(��) %s���� ������ �߽��ϴ�.", character[0].name, character[index].name);
							Use_Item_or_Skill(1, 1, index, character);
							eraseMSG();
							if(index == 10 && character[index].AttackPoint == 0)
							{
								printf("%s: ...", character[index].name);
								getch();
								CharacterExpression(index, character, 69);
								eraseMSG();
								printf("%s: ������ ����ϸ� �������´� �Ͼ�� ���� ���Դϴ�.", character[index].name);
								getch_eraseMSG();
								CharacterExpression(0, character, 14);
								CharacterBlink(index, character, 13);
								character[index].HealthPoint = 66;
								character[index].MaxHealthPoint = 66;
								character[index].AttackPoint = character[0].HealthPoint - 1;
							}
							else if(index == 10)
							{
								printf("%s: �׾�� ������ �����ڱ�.", character[index].name);
								getch_eraseMSG();
								CharacterExpression(index, character, 6969);
								CharacterExpression(0, character, 14);
								CharacterBlink(index, character, 14);
								character[index].AttackPoint = 444;
							}
							else
							{
								printf("%s��(��) ȭ�� ���� �����߽��ϴ�.", character[index].name);
								getch_eraseMSG();
								printf("%s�� ���ݷ��� 5 ����߽��ϴ�.", character[index].name);
								CharacterExpression(0, character, 14);
								CharacterBlink(index, character, 9);
								character[index].AttackPoint += 5;
							}
							StateDisplay(index, character, previousMonsterHP , previousMonsterAP, 5, 2);
						}
						break;
					case 60:	//�ʻ��
						if(KillingCount >= 9 && character[0].HealthPoint == 1)
						{
							decide = 1;
							turn++;
							eraseMSG();
							if(index == 10 && character[index].AttackPoint == 0)
								break;
							printf("%s��(��) %s���� �ʻ�⸦ ����ϴ�.", character[0].name, character[index].name);
							Use_Item_or_Skill(0, 0, index, character);
							character[index].HealthPoint = 0;
							StateDisplay(index, character, previousMonsterHP, character[index].AttackPoint, 5, 2);
							eraseMSG();
							//gotoxy(4, 22);
							printf("%s: �Ź�...", character[index].name);
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
				printf("%s�� ������ ������ �������̱� ������ ������ ������ ������׽��ϴ�.", character[index].name);
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
				printf("%s��(��) %s��(��) ���Ƚ��ϴ�.", character[index].name, character[0].name);
				CharacterDisplay(index, character);
				CharacterAttack(index, character);
				CharacterBlink(0, character, 4);
			}
			character[0].HealthPoint -= character[index].AttackPoint;	//�÷��̾��� ü���� ������ ���ݷ¸�ŭ ���Դϴ�.
			Adjust_NegativeHealthPoint_To_Zero(0, character);
			turn--;	//2���� turn�� �ٽ� 1�� �ǹǷ� ���� for�������� �ٽ� if���� ������ �н��ϴ�.
			StateDisplay(0, character, previousPlayerHP, character[0].AttackPoint, 40, 15);
		}
		if(index == 10 && character[index].AttackPoint == 444)
		{
			eraseMSG();
			Sleep(1000);
		}
		else
			getch_eraseMSG();

		if(character[index].HealthPoint <= 0)	//���� �й�
		{
			KillingCount++;
			printf("%s��(��) �̰���ϴ�.", character[index].name);
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
		if(character[0].HealthPoint <= 0)	//�÷��̾� �й�
		{
			printf("����� �й��߽��ϴ�.");
			if(index == 10 && character[index].AttackPoint == 444)
				CharacterExpression(0, character, 4444);
			else
				CharacterExpression(0, character, 444);
			CharacterDown(0, character);
			if(x == 40)
			{
				getch_eraseMSG();
				printf("%s: ������", character[index].name);
			}
			getch();
		}

		x = 10;
	}

	system("cls");
}