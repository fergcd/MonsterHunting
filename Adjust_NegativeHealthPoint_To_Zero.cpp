#include"Header.h"

void Adjust_NegativeHealthPoint_To_Zero(int index, sCharacter* character)	//ĳ������ ü���� ������ ���� ��  ü���� 0���� �������ݴϴ�.
{
	if(character[index].HealthPoint <= 0)
		character[index].HealthPoint = 0;
}