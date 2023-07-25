#include"Header.h"

void ItemAcquire(int itemType, sCharacter* character)	//������ ���� �ִϸ��̼�
{
	int x = 22;
	int y = 19;
	int blink = 0;
	int turn = 0;

	char flower[5][22] = {"  ��",
						  "�ܡݡ�",
						  " �ܡ�",
						  "  ��",
						  "�Ц���"};

	char fruit[4][22] = {"   ��",
					     "  �Ρ�",
						 "��`��`��",
						 "  ��_��"};

	char grenade[7][22] = {"   ��",
		                   "   ��",
						   "  ���",
						   " ����",
						   "�����",
						   "�����",
						   " ����"};

	char corn[6][22] = {" �� ",
					    "�ˢ�",
					    "�ˢ�",
					    "�ˢ�",
					    "�ˢ�",
					    " ��"};

	SetCursorType(NOCURSOR);

	arm(-1, "��");

	Sleep(300);

	for (blink = 0; blink <= 15; blink++)
	{
		if (itemType <= 10)
		{
			if (turn == 0)
			{
				textcolor(BLACK);
				turn++;
			}
			else
			{
				if (10 == itemType)
				{
					textcolor(YELLOW);
				}
				else
				{
					textcolor(LIGHTGRAY);
				}
				turn--;
			}
		}
		switch (itemType)
		{
		case 1:	//¯��
			gotoxy(29, 12);
			printf("��");
			break;
		case 2:	//��
		case 12:
			ItemAcquireFunction(27, 8, 4, flower);
			break;
		case 3:	//��������
			ItemAcquireFunction(26, 9, 3, fruit);
			break;
		case 7:	//����ź
		case 17:
			ItemAcquireFunction(26, 6, 6, grenade);
			break;
		case 10:	//������
			ItemAcquireFunction(28, 7, 5, corn);
			break;
		default:
			break;
		}
		Sleep(30);
	}
	textcolor(LIGHTGRAY);

	switch (itemType)
	{
	case 12:
		EatItem(itemType, character, flower);
		break;
	case 13:
		EatItem(itemType, character, fruit);
		break;
	case 17:
		EatItem(itemType, character, grenade);
		Sleep(600);
		break;
	default:
		break;
	}

	SetCursorType(SHOWCURSOR);
}