#include"Header.h"

void CheckDuplication(int index, sCharacter* character, int *NoDuplication, int *SelectedMonster, int *x, int *y)	//Select���� ������ ���Ͱ� �̹� �̹� ����Ʈ�� �������� Ȯ��.  �Ⱦ���Ʈ�� ���͸� ����
{
	if(character[index].HealthPoint > 0)
	{
		Blink(character[index].name, *x, *y, 14);
		--*NoDuplication;
		*SelectedMonster = index;
	}
}