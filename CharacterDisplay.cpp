#include"Header.h"

void CharacterDisplay(eCharacterName characterName, sCharacter* character)	//Battle���� ĳ���� �̹��� ǥ��(30x11������)
{//	x = 3, y = 9	x = 48, y = 2
	SetCursorType(NOCURSOR);

	switch (characterName)	//������ 30x11
	{
	case eCharacterName::Player:
		CharacterDisplayFunction(characterName, character, 3, 9);
		break;
	case eCharacterName::Stone:
	case eCharacterName::Flower:
	case eCharacterName::Tree:
	case eCharacterName::Ant:
	case eCharacterName::GrassHopper:
	case eCharacterName::InfinitesimalCalculusTextBook:
	case eCharacterName::Grenade:
	case eCharacterName::Billy:
	case eCharacterName::CamelCriket:
	case eCharacterName::Gandhi:
		CharacterDisplayFunction(characterName, character, 48, 3);
		break;
	default:
		break;
	}

	SetCursorType(SHOWCURSOR);
}