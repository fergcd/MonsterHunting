#include"Header.h"

int Select(sCharacter* character)	//����� ���� ����
{
	int x = 1, y = 1, index = 1, NoDuplication = 1, SelectedMonster = 0;

	while(index <= 10)	//����� ���� ��� ���
	{
		if(character[index].HealthPoint <= 0)	//����Ʈ�� ���ʹ� ��Ͽ��� �Ⱥ��̰� �մϴ�.
		{
			textcolor(0);
			printf("%-11s", character[index].name);
			textcolor(7);
		}
		else
			printf("%-11s", character[index].name);

		if(index == 5)
			printf("\n");

		index++;
	}
	//printf("������     ��         ����       ����       �޶ѱ�\n");//1,1	12,1	23,1	34,1	45,1
	//printf("��������å ����ź     ����       ������     ����");  //1,2	12,2	23,2	34,2	45,2

	gotoxy(15, 12);
	printf("����Ű�� ����Ʈ������� ���� �����ϰ� ���͸� ��������");

	gotoxy(x, y);

	while(NoDuplication == 1)	//�Ⱦ���Ʈ�� ���� ������ ������
	{
		switch(getch())
		{
		case 72:	//��
			if(y == 2)
				y--;
			break;
		case 80:	//�Ʒ�
			if(y == 1)
				y++;
			break;
		case 75:	//����
			if(x >= 12 && x <= 45)
				x -= 11;
			break;
		case 77:	//������
			if(x >= 1 && x <= 34)
				x += 11;
			break;
		case 13:	//����
			switch(x+y)
			{
			case 2:
				CheckDuplication(1, character, &NoDuplication, &SelectedMonster, &x, &y);
				break;
			case 13:
				CheckDuplication(2, character, &NoDuplication, &SelectedMonster, &x, &y);
				break;
			case 24:
				CheckDuplication(3, character, &NoDuplication, &SelectedMonster, &x, &y);
				break;
			case 35:
				CheckDuplication(4, character, &NoDuplication, &SelectedMonster, &x, &y);
				break;
			case 46:
				CheckDuplication(5, character, &NoDuplication, &SelectedMonster, &x, &y);
				break;
			case 3:
				CheckDuplication(6, character, &NoDuplication, &SelectedMonster, &x, &y);
				break;
			case 14:
				CheckDuplication(7, character, &NoDuplication, &SelectedMonster, &x, &y);
				break;
			case 25:
				CheckDuplication(8, character, &NoDuplication, &SelectedMonster, &x, &y);
				break;
			case 36:
				CheckDuplication(9, character, &NoDuplication, &SelectedMonster, &x, &y);
				break;
			case 47:
				CheckDuplication(10, character, &NoDuplication, &SelectedMonster, &x, &y);
				break;
			}
		default:
			break;
		}

		//gotoxy(1, 4);
		//printf("x: %d	y: %d	NoDuplication: %d	SelectedMonster: %d", x, y, NoDuplication, SelectedMonster);
		gotoxy(x, y);
	}

	system("cls");

	return SelectedMonster;
}