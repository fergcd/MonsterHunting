#include"Header.h"

void resetFunction(sCharacter* character, int index, int HealthPoint, int MaxHealthPoint, int AttackPoint)	//reset���� ���̴� �Լ�
{
	character[index].HealthPoint = HealthPoint;
	character[index].MaxHealthPoint = MaxHealthPoint;
	character[index].AttackPoint = AttackPoint;
}