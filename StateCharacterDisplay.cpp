#include"Header.h"

void StateCharacterDisplay(eCharacterName characterName, sCharacter* character, int partially)	//ĳ���� �̹����� ���� ǥ��(ĳ������ ��� ��� �ִϸ��̼ǿ��� ���Դϴ�)
{	// partially == 1 -> ���� ��	partially == 2 -> ���� ���¸�
	if (partially == 1)
	{
		CharacterDisplay(eCharacterName::Player, character);
		CharacterDisplay(characterName, character);
		StateDisplay(0, character, character[0].HealthPoint, character[0].AttackPoint, 40, 15);
	}
	StateDisplay((int)characterName, character, character[(int)characterName].HealthPoint, character[(int)characterName].AttackPoint, 5, 2);
}