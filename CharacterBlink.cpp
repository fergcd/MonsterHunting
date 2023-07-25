#include"Header.h"

void CharacterBlink(eCharacterName characterName, sCharacter* character, WORD color)	//Battle에서 캐릭터 깜빡임 애니메이션
{
	SetCursorType(NOCURSOR);

	Sleep(300);
	switch (characterName)
	{
	case eCharacterName::Player:
		CharacterBlinkFunction(characterName, character, 3, 9, color);
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
		CharacterBlinkFunction(characterName, character, 48, 3, color);
		break;
	default:
		break;
	}
	Sleep(300);

	if (characterName == eCharacterName::Player && color != RED)
	{
		CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerNormal);
	}

	SetCursorType(SHOWCURSOR);
}