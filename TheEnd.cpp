#include"Header.h"

void TheEnd(sCharacter* character, char KillingCount)	//���� 10������ �� ����Ʈ�Ȱų� �÷��̾ �й����� �� ����ȭ���� ����մϴ�.
{
	if(character[0].HealthPoint <= 0)
	{
		gotoxy(35, 12);
		printf("Game Over");
	}
	else if(KillingCount == 10)
	{
		gotoxy(25, 11);
		printf("��� ���͵��� ����Ʈ�Ƚ��ϴ�.");
		gotoxy(30, 13);
		printf("����� �ְ����Դϴ�.");
		gotoxy(36, 16);
		printf("The End");
	}

	gotoxy(19, 20);
	Sleep(1500);
	printf("�ƹ�Ű�� ������ Ÿ��Ʋ ȭ������ �̵��մϴ�.");
	getch();
	system("cls");
}