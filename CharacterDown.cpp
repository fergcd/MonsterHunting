#include"Header.h"

void CharacterDown(eCharacterName characterName, sCharacter* character)	//Battle에서 캐릭터 쓰러지는 애니메이션
{		
	SetCursorType(NOCURSOR);
	
	Sleep(300);
	switch(characterName)
	{
	case eCharacterName::Player:
		CharacterDownFunction(characterName, character, 3, 9);
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
		CharacterDownFunction(characterName, character, 48, 3);
		break;
	default:
		break;
	}
	Sleep(300);

	SetCursorType(SHOWCURSOR);
}