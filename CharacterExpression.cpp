#include "Header.h"

void CharacterExpression(eCharacterName characterName, sCharacter* character, eCharacterExpression characterExpression)	//Battle¿¡¼­ Ä³¸¯ÅÍÀÇ Ç¥Á¤ º¯È­
{
	switch (characterExpression)
	{
	case eCharacterExpression::PlayerNormal:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      ¡á¡á¡á¡á¥Ë¡á¡á          ");
		break;
	case eCharacterExpression::PlayerDisappointed:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      ¡á¡á¡á¡á¦¬¡á¡á          ");
		break;
	case eCharacterExpression::PlayerDamaged:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      ¡á¡á¡á¡á£¾¡á¡á          ");
		break;
	case eCharacterExpression::PlayerDead:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      ¡á¡á¡á¡á¡¿¡á¡á          ");
		break;
	case eCharacterExpression::PlayerFatalKilled:
		strcpy_s(character[(int)characterName].CharacterIMG[1], "                              ");
		strcpy_s(character[(int)characterName].CharacterIMG[2], "                              ");
		strcpy_s(character[(int)characterName].CharacterIMG[3], "                              ");
		strcpy_s(character[(int)characterName].CharacterIMG[4], "                  ¡á          ");
		strcpy_s(character[(int)characterName].CharacterIMG[5], "        ¡á¡á  ¡á¡á            ");
		strcpy_s(character[(int)characterName].CharacterIMG[6], "      ¡á  ¡á¡á¡á¡á¡á          ");
		break;
	case eCharacterExpression::PlayerPowerUp:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      ¡á¡á¡á¡á¡Ú¡á¡á          ");
		break;
	case eCharacterExpression::PlayerHealthUp:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      ¡á¡á¡á¡á¡Ü¡á¡á          ");
		break;
	case eCharacterExpression::PlayerWhatThe:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      ¡á¡á¡á¡á¢Á¡á¡á          ");
		break;
	case eCharacterExpression::BillyGozarani:
		strcpy_s(character[(int)characterName].CharacterIMG[1], "         Ò¬  §¦§¦§¦           ");
		strcpy_s(character[(int)characterName].CharacterIMG[2], "        «Î£©£¨¬¥¢ª£©Ò¬        ");
		strcpy_s(character[(int)characterName].CharacterIMG[6], "          £¨¢ª¬¥¢ª£©          ");
		break;
	case eCharacterExpression::BillyNormalDead:
		strcpy_s(character[(int)characterName].CharacterIMG[2], "        «Î£©£¨¬Õx£© Ò¬        ");
		strcpy_s(character[(int)characterName].CharacterIMG[6], "          £¨¡¿¬Õ¡¿£©          ");
		break;
	case eCharacterExpression::BillyGozaDead:
		strcpy_s(character[(int)characterName].CharacterIMG[2], "        «Î£©£¨¬¥¢³£©Ò¬        ");
		strcpy_s(character[(int)characterName].CharacterIMG[6], "          £¨¢³¬¥¢³£©          ");
		break;
	case eCharacterExpression::GrassHopperNormal:
		strcpy_s(character[(int)characterName].CharacterIMG[5], "   ¡¬¡Ý ¡¬¥Î¥Î¡ó¥Î¡«¥Î¡Ð£ß_   ");
		break;	
	case eCharacterExpression::GrassHopperDamaged:
		strcpy_s(character[(int)characterName].CharacterIMG[5], "   ¡¬£¼ ¡¬¥Î¥Î¡ó¥Î¡«¥Î¡Ð£ß_   ");
		break;
	case eCharacterExpression::GrassHopperDead:
		strcpy_s(character[(int)characterName].CharacterIMG[5], "   ¡¬¨ä ¡¬¥Î¥Î¡ó¥Î¡«¥Î¡Ð£ß_   ");
		break;
	case eCharacterExpression::CamelCriketNormal:
		strcpy_s(character[(int)characterName].CharacterIMG[7], "  £¯¦­¡Ü¡¬¦­¦­¦­ /¦­¦­  ¤Ó    ");
		break;	
	case eCharacterExpression::CamelCriketDamaged:
		strcpy_s(character[(int)characterName].CharacterIMG[7], "  £¯¦­£¼¡¬¦­¦­¦­ /¦­¦­  ¤Ó    ");
		break;
	case eCharacterExpression::CamelCriketDead:
		strcpy_s(character[(int)characterName].CharacterIMG[7], "  £¯¦­¨ä¡¬¦­¦­¦­ /¦­¦­  ¤Ó    ");
		break;
	case eCharacterExpression::GandhiPissedOff:
		strcpy_s(character[(int)characterName].CharacterIMG[4], "      £¨«Ø  «Ø   ¦¢           ");
		strcpy_s(character[(int)characterName].CharacterIMG[5], "        ¢Á«Ï¢Á¦¡¦¡©¬          ");
		strcpy_s(character[(int)characterName].CharacterIMG[7], "        ¡¬«¸ ¦­ «Î            ");
		break;
	case eCharacterExpression::GandhiSuperSaiyan:
		strcpy_s(character[(int)characterName].CharacterIMG[1], "      £¨¡¬«Î¡¬«Î£©«Î£©        ");
		strcpy_s(character[(int)characterName].CharacterIMG[2], "     £¨¡¬£¨¡¬ «Î£©«Î£©        ");
		strcpy_s(character[(int)characterName].CharacterIMG[3], "     £¨¡¬_ß²__«Î£©«Î£©        ");
		strcpy_s(character[(int)characterName].CharacterIMG[4], "      £¨«Îß²«Ø   «Î£©         ");
		strcpy_s(character[(int)characterName].CharacterIMG[5], "        ¡Ý«Ï¡Ý¦¡  ©¬          ");
		strcpy_s(character[(int)characterName].CharacterIMG[6], "       ¦¼<..>¦¯  ¡ò           ");
		strcpy_s(character[(int)characterName].CharacterIMG[7], "        ¡¬ìÌ ¦­ «Î            ");
		strcpy_s(character[(int)characterName].CharacterIMG[8], "   £¨¡¬  ¦¦¦¡   ¦¢    «Î£©    ");
		strcpy_s(character[(int)characterName].CharacterIMG[9], "   «Î  ¡¬¦¥     ¦¦¦¡«Î  ¡¬    ");
		break;
	case eCharacterExpression::GandhiDead:
		strcpy_s(character[(int)characterName].CharacterIMG[4], "      £¨«Î  «Ø   ¦¢           ");
		strcpy_s(character[(int)characterName].CharacterIMG[5], "        ¨ä«Ï¨ä¦¡¦¡©¬          ");
		strcpy_s(character[(int)characterName].CharacterIMG[7], "        ¡¬''\"¦­ «Î            ");
		break;
	}

	CharacterDisplay(characterName, character);
}