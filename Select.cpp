#include"Header.h"

eCharacterName Select(sCharacter* character)	//����� ���� ����
{
	int x = 1;
	int y = 1;
	int index = 1;
	int NoDuplication = 1;
	eCharacterName selectedMonster = eCharacterName::Player;

	while (index <= 10)	//����� ���� ��� ���
	{
		if(character[index].HealthPoint <= 0)	//����Ʈ�� ���ʹ� ��Ͽ��� �Ⱥ��̰� �մϴ�.
		{
			textcolor(BLACK);
			printf("%-11s", character[index].name);
			textcolor(LIGHTGRAY);
		}
		else
		{
			printf("%-11s", character[index].name);
		}

		if (index == 5)
		{
			printf("\n");
		}

		index++;
	}
	//printf("������     ��         ����       ����       �޶ѱ�\n");//1,1	12,1	23,1	34,1	45,1
	//printf("��������å ����ź     ����       ������     ����");  //1,2	12,2	23,2	34,2	45,2

	gotoxy(15, 12);
	printf("����Ű�� ����Ʈ������� ���� �����ϰ� ���͸� ��������");

	gotoxy(x, y);

	while (NoDuplication == 1)	//�Ⱦ���Ʈ�� ���� ������ ������
	{
		switch (_getch())
		{
		case 72:	//��
			if (y == 2)
			{
				y--;
			}
			break;
		case 80:	//�Ʒ�
			if (y == 1)
			{
				y++;
			}
			break;
		case 75:	//����
			if (x >= 12 && x <= 45)
			{
				x -= 11;
			}
			break;
		case 77:	//������
			if (x >= 1 && x <= 34)
			{
				x += 11;
			}
			break;
		case 13:	//����
			switch(x+y)
			{
			case 2:
				CheckDuplication(1, character, &NoDuplication, &selectedMonster, &x, &y);
				break;
			case 13:
				CheckDuplication(2, character, &NoDuplication, &selectedMonster, &x, &y);
				break;
			case 24:
				CheckDuplication(3, character, &NoDuplication, &selectedMonster, &x, &y);
				break;
			case 35:
				CheckDuplication(4, character, &NoDuplication, &selectedMonster, &x, &y);
				break;
			case 46:
				CheckDuplication(5, character, &NoDuplication, &selectedMonster, &x, &y);
				break;
			case 3:
				CheckDuplication(6, character, &NoDuplication, &selectedMonster, &x, &y);
				break;
			case 14:
				CheckDuplication(7, character, &NoDuplication, &selectedMonster, &x, &y);
				break;
			case 25:
				CheckDuplication(8, character, &NoDuplication, &selectedMonster, &x, &y);
				break;
			case 36:
				CheckDuplication(9, character, &NoDuplication, &selectedMonster, &x, &y);
				break;
			case 47:
				CheckDuplication(10, character, &NoDuplication, &selectedMonster, &x, &y);
				break;
			default:
				break;
			}
		default:
			break;
		}
		
		gotoxy(x, y);
	}

	system("cls");

	return selectedMonster;
}