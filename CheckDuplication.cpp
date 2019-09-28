#include"Header.h"

void CheckDuplication(int index, sCharacter* character, int *NoDuplication, int *SelectedMonster, int *x, int *y)	//Select에서 선택한 몬스터가 이미 이미 쓰러트린 몬스터인지 확인.  안쓰러트린 몬스터면 진행
{
	if(character[index].HealthPoint > 0)
	{
		Blink(character[index].name, *x, *y, 14);
		--*NoDuplication;
		*SelectedMonster = index;
	}
}