#include"Header.h"

void resetFunction(sCharacter* character, int index, int HealthPoint, int MaxHealthPoint, int AttackPoint)	//reset에서 쓰이는 함수
{
	character[index].HealthPoint = HealthPoint;
	character[index].MaxHealthPoint = MaxHealthPoint;
	character[index].AttackPoint = AttackPoint;
}