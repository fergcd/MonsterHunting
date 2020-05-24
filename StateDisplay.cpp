#include"Header.h"

void StateDisplay(int index, sCharacter* character, int previousHP, int previousAP, int x, int y)	//Battle���� ĳ���� ���� ǥ��
{
	int HPdisplay = 1;
	int APdisplay = 1;

	SetCursorType(NOCURSOR);

	if (previousHP == 0)	//���� ���۽� ü��, ���ݷ� ǥ��
	{
		gotoxy(x, y);
		printf("<%s>", character[index].name);	//ĳ���� �̸�
		gotoxy(x, y + 1);
		printf("ü�� ");	//ĳ���� ü�¹�	(�÷��̾� |��35  ���� |��70)
		gotoxy(x, y+2);
		printf("           0 /");	//ĳ���� ü�� ��ġ
		gotoxy(x, y+3);
		printf("���ݷ�:  0");	//ĳ���� ���ݷ� ��ġ
		Sleep(500);
		for (; HPdisplay <= character[index].HealthPoint || APdisplay <= character[index].AttackPoint; HPdisplay++, APdisplay++)
		{
			if (HPdisplay <= character[index].HealthPoint)
			{
				gotoxy(x + 4 + HPdisplay, y + 1);
				printf("|");	//ĳ���� ü�¹� ���
				gotoxy(x + 10, y + 2);
				printf("%2d", HPdisplay);	//ĳ���� ü�� ��ġ ���
			}
			
			if (APdisplay <= character[index].AttackPoint)
			{
				gotoxy(x + 8, y + 3);
				printf("%2d", APdisplay);	//ĳ���� ���ݷ� ��ġ ���
			}

			Sleep(15);
		}
		gotoxy(x + 15, y + 2);
		character[index].MaxHealthPoint = character[index].HealthPoint;
		printf("%2d", character[index].MaxHealthPoint);	//ĳ���� �ִ�ü�� ���
	}

	if (previousHP == character[index].HealthPoint && previousAP == character[index].AttackPoint)	//���� ü��, ���ݷ��� �ִϸ��̼� ���� �ٷ� ǥ��(StateCharacterDisplay �Լ����� ���Դϴ�)
	{
		gotoxy(x, y);
		printf("<%s>", character[index].name);	//ĳ���� �̸�
		gotoxy(x, y + 1);
		printf("ü�� ");	//ĳ���� ü�¹�	(�÷��̾� |��35  ���� |��70)
		gotoxy(x, y+2);
		printf("           0 /");	//ĳ���� ü�� ��ġ
		gotoxy(x, y+3);
		printf("���ݷ�:  0");	//ĳ���� ���ݷ� ��ġ

		for (; HPdisplay <= character[index].HealthPoint || APdisplay <= character[index].AttackPoint; HPdisplay++, APdisplay++)
		{
			if (HPdisplay <= character[index].HealthPoint)
			{
				if (index == 0)
				{
					gotoxy(x + 4 + HPdisplay, y + 1);
					printf("|");	//ĳ���� ü�¹� ���
				}
				gotoxy(x + 10, y + 2);
				printf("%2d", HPdisplay);	//ĳ���� ü�� ��ġ ���
			}
			
			if (APdisplay <= character[index].AttackPoint)
			{
				gotoxy(x + 8, y + 3);
				printf("%2d", APdisplay);	//ĳ���� ���ݷ� ��ġ ���
			}
		}
		gotoxy(x + 15, y + 2);
		character[index].MaxHealthPoint = character[index].HealthPoint;
		printf("%2d", character[index].MaxHealthPoint);	//ĳ���� �ִ�ü�� ���
	}

	if ((previousHP != 0 && character[index].HealthPoint != previousHP) || character[index].AttackPoint > previousAP)	//HP ����/���� �� AP ����
	{
		for (; HPdisplay <= abs(character[index].HealthPoint - previousHP) || APdisplay <= character[index].AttackPoint - previousAP; HPdisplay++, APdisplay++)
		{
			if (character[index].HealthPoint <= previousHP - HPdisplay)	//HP �� ����
			{
				gotoxy(x + 5 + previousHP - HPdisplay, y + 1);
				printf(" ");
			}
			else if (character[index].HealthPoint >= previousHP + HPdisplay)	//HP �� ����
			{
				gotoxy(x + 4 + previousHP + HPdisplay, y + 1);
				printf("|");
			}

			gotoxy(x + 10, y + 2);
			if (character[index].HealthPoint <= previousHP - HPdisplay)	//HP ��ġ ����
			{
				printf("%2d", previousHP - HPdisplay);
			}
			else if (character[index].HealthPoint >= previousHP + HPdisplay)	//HP ��ġ ����
			{
				printf("%2d", previousHP + HPdisplay);
			}

			if (character[index].HealthPoint > previousHP && HPdisplay == abs(character[index].HealthPoint - previousHP))
			{
				gotoxy(x + 15, y + 2);
				character[index].MaxHealthPoint = character[index].HealthPoint;
				printf("%2d", character[index].MaxHealthPoint);	//HP ������ ���� ĳ���� �ִ�ü�� ����
			}

			if (character[index].AttackPoint >= previousAP + APdisplay)	//AP ��ġ ����
			{
				gotoxy(x + 8, y + 3);
				printf("%2d", previousAP + APdisplay);
			}

			if (index == 10 && character[index].AttackPoint == 444)
			{
				Sleep(1);
			}
			else
			{
				Sleep(30);
			}
		}
	}

	SetCursorType(SHOWCURSOR);
}