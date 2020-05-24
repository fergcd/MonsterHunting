#include"Header.h"

void CharacterBlinkFunction(eCharacterName characterName, sCharacter* character, int x, int y, WORD color)	//CharacterBlink에서 쓰이는 함수
{
	int blinkCount = 1;
	bool bIsColored = false;

	while (blinkCount <= 20)
	{
		if (false == bIsColored)
		{
			textcolor(color);
			bIsColored = true;
		}
		else
		{
			textcolor(LIGHTGRAY);
			bIsColored = false;
		}

		if (3 == x)
		{
			switch (color)
			{
			case RED:
				CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerDamaged);
				break;
			case LIGHTBLUE:
				CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerPowerUp);
				break;
			case LIGHTGREEN:
				CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerHealthUp);
				break;
			case YELLOW:
				CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerWhatThe);
				break;
			default:
				break;
			}			
		}
		else
		{
			if (FOREGROUND_RED == color)
			{
				switch(characterName)
				{
				case eCharacterName::GrassHopper:
					CharacterExpression(characterName, character, eCharacterExpression::GrassHopperDamaged);
					break;
				case eCharacterName::CamelCriket:
					CharacterExpression(characterName, character, eCharacterExpression::CamelCriketDamaged);
					break;
				default:
					CharacterDisplay(characterName, character);
					break;
				}
			}
			else
			{
				CharacterDisplay(characterName, character);
			}
		}
		
		Sleep(30);
		
		blinkCount++;
	}
}