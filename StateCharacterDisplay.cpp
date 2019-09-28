#include"Header.h"

void StateCharacterDisplay(int index, sCharacter* character, int partially)	//캐릭터 이미지와 상태 표시(캐릭터의 기술 사용 애니메이션에서 쓰입니다)
{	// partially == 1 -> 전부 다	partially == 2 -> 몬스터 상태만
	if(partially == 1)
	{
		CharacterDisplay(0, character);
		CharacterDisplay(index, character);
		StateDisplay(0, character, character[0].HealthPoint, character[0].AttackPoint, 40, 15);
	}
	StateDisplay(index, character, character[index].HealthPoint, character[index].AttackPoint, 5, 2);
}