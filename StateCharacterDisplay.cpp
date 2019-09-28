#include"Header.h"

void StateCharacterDisplay(int index, sCharacter* character, int partially)	//ĳ���� �̹����� ���� ǥ��(ĳ������ ��� ��� �ִϸ��̼ǿ��� ���Դϴ�)
{	// partially == 1 -> ���� ��	partially == 2 -> ���� ���¸�
	if(partially == 1)
	{
		CharacterDisplay(0, character);
		CharacterDisplay(index, character);
		StateDisplay(0, character, character[0].HealthPoint, character[0].AttackPoint, 40, 15);
	}
	StateDisplay(index, character, character[index].HealthPoint, character[index].AttackPoint, 5, 2);
}