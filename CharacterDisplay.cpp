#include"Header.h"

void CharacterDisplay(int index, sCharacter* character)	//Battle���� ĳ���� �̹��� ǥ��(30x11������)
{//	x = 3, y = 9	x = 48, y = 2
	character_name = (CharacterName)index;	//character_name�� �ڷ����� CharacterName, �� �������ε� �ҽ����� Ȯ���ڸ� c���� cpp�� �ٲٴϱ� index�� �ڷ����� int�� �������� ���� �ٸ� �ڷ������� �νĵǼ� ĳ��Ʈ ������ ���

	SetCursorType(NOCURSOR);

	switch(character_name)	//������ 30x11
	{
	case Player:
		CharacterDisplayFunction(0, character, 3, 9);
		break;
	case Stone:
		CharacterDisplayFunction(index, character, 48, 3);
		break;
	case Flower:
		CharacterDisplayFunction(index, character, 48, 3);
		break;
	case Tree:
		CharacterDisplayFunction(index, character, 48, 3);
		break;
	case Ant:
		CharacterDisplayFunction(index, character, 48, 3);
		break;
	case GrassHopper:
		CharacterDisplayFunction(index, character, 48, 3);
		break;
	case Infinitesimal_Calculus_TextBook:
		CharacterDisplayFunction(index, character, 48, 3);
		break;
	case Grenade:
		CharacterDisplayFunction(index, character, 48, 3);
		break;
	case Billy:
		CharacterDisplayFunction(index, character, 48, 3);
		break;
	case Camel_Criket:
		CharacterDisplayFunction(index, character, 48, 3);
		break;
	case Gandhi:
		CharacterDisplayFunction(index, character, 48, 3);
		break;
	}

	SetCursorType(SHOWCURSOR);
}