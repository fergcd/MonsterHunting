#include"Header.h"

void ItemDeactivate(int x, int index, sCharacter* character)	//��, ����, ����ź���Լ� ���� �� �ִ� ������ �� ���� �Ⱦ���Ʈ�� ������ �������� ��Ͽ��� �Ⱥ��̰� �մϴ�.(1, 2, 6)
{
	gotoxy(x, 23);
	if(index == 0 && KillingCount >= 9 && character[0].HealthPoint == 1)
		printf("�ʻ��");
	else if(character[index].HealthPoint > 0)
	{
		textcolor(0);
		printf("%s", character[index].name);
		textcolor(7);
	}
	else
	{
		if(index == 1)
			printf("¯��");
		else if(index == 8)
			printf("����");
		else
			printf("%s", character[index].name);
	}
}