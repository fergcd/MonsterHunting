#include"Header.h"

void Adjust_NegativeHealthPoint_To_Zero(int index, sCharacter* character)	//캐릭터의 체력이 음수가 됬을 때  체력을 0으로 조정해줍니다.
{
	if(character[index].HealthPoint <= 0)
		character[index].HealthPoint = 0;
}