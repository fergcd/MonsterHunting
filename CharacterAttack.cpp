#include"Header.h"

void CharacterAttack(int index, sCharacter* character)	//Battle���� ĳ���� ���� �ִϸ��̼�
{
	character_name = (CharacterName)index;	//character_name�� �ڷ����� CharacterName, �� �������ε� �ҽ����� Ȯ���ڸ� c���� cpp�� �ٲٴϱ� index�� �ڷ����� int�� �������� ���� �ٸ� �ڷ������� �νĵǼ� ĳ��Ʈ ������ ���
	
	SetCursorType(NOCURSOR);
	
	Sleep(300);
	switch(character_name)
	{
	case Player:
		CharacterAttackFunction(0, character, 3, 9);
		break;
	case Stone:
		CharacterAttackFunction(index, character, 48, 3);
		break;
	case Flower:
		CharacterAttackFunction(index, character, 48, 3);
		break;
	case Tree:
		CharacterAttackFunction(index, character, 48, 3);
		break;
	case Ant:
		CharacterAttackFunction(index, character, 48, 3);
		break;
	case GrassHopper:
		CharacterAttackFunction(index, character, 48, 3);
		break;
	case Infinitesimal_Calculus_TextBook:
		CharacterAttackFunction(index, character, 48, 3);
		break;
	case Grenade:
		CharacterAttackFunction(index, character, 48, 3);
		break;
	case Billy:
		CharacterAttackFunction(index, character, 48, 3);
		break;
	case Camel_Criket:
		CharacterAttackFunction(index, character, 48, 3);
		break;
	case Gandhi:
		CharacterAttackFunction(index, character, 48, 3);
		break;
	}
	Sleep(300);

	SetCursorType(SHOWCURSOR);
}