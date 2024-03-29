#include "Header.h"

void CharacterExpression(eCharacterName characterName, sCharacter* character, eCharacterExpression characterExpression)	//Battle縑憮 議葛攪曖 ル薑 滲��
{
	switch (characterExpression)
	{
	case eCharacterExpression::PlayerNormal:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      ﹥﹥﹥﹥瓦﹥﹥          ");
		break;
	case eCharacterExpression::PlayerDisappointed:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      ﹥﹥﹥﹥收﹥﹥          ");
		break;
	case eCharacterExpression::PlayerDamaged:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      ﹥﹥﹥﹥ˇ﹥﹥          ");
		break;
	case eCharacterExpression::PlayerDead:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      ﹥﹥﹥﹥▼﹥﹥          ");
		break;
	case eCharacterExpression::PlayerFatalKilled:
		strcpy_s(character[(int)characterName].CharacterIMG[1], "                              ");
		strcpy_s(character[(int)characterName].CharacterIMG[2], "                              ");
		strcpy_s(character[(int)characterName].CharacterIMG[3], "                              ");
		strcpy_s(character[(int)characterName].CharacterIMG[4], "                  ﹥          ");
		strcpy_s(character[(int)characterName].CharacterIMG[5], "        ﹥﹥  ﹥﹥            ");
		strcpy_s(character[(int)characterName].CharacterIMG[6], "      ﹥  ﹥﹥﹥﹥﹥          ");
		break;
	case eCharacterExpression::PlayerPowerUp:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      ﹥﹥﹥﹥≠﹥﹥          ");
		break;
	case eCharacterExpression::PlayerHealthUp:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      ﹥﹥﹥﹥≒﹥﹥          ");
		break;
	case eCharacterExpression::PlayerWhatThe:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      ﹥﹥﹥﹥Ⅸ﹥﹥          ");
		break;
	case eCharacterExpression::BillyGozarani:
		strcpy_s(character[(int)characterName].CharacterIMG[1], "         珙  圻圻圻           ");
		strcpy_s(character[(int)characterName].CharacterIMG[2], "        屋ㄘㄗ洛◥ㄘ珙        ");
		strcpy_s(character[(int)characterName].CharacterIMG[6], "          ㄗ◥洛◥ㄘ          ");
		break;
	case eCharacterExpression::BillyNormalDead:
		strcpy_s(character[(int)characterName].CharacterIMG[2], "        屋ㄘㄗ盈xㄘ 珙        ");
		strcpy_s(character[(int)characterName].CharacterIMG[6], "          ㄗ▼盈▼ㄘ          ");
		break;
	case eCharacterExpression::BillyGozaDead:
		strcpy_s(character[(int)characterName].CharacterIMG[2], "        屋ㄘㄗ洛４ㄘ珙        ");
		strcpy_s(character[(int)characterName].CharacterIMG[6], "          ㄗ４洛４ㄘ          ");
		break;
	case eCharacterExpression::GrassHopperNormal:
		strcpy_s(character[(int)characterName].CharacterIMG[5], "   ′≡ ′用用☉用‵用－�絻   ");
		break;
	case eCharacterExpression::GrassHopperDamaged:
		strcpy_s(character[(int)characterName].CharacterIMG[5], "   ′ˉ ′用用☉用‵用－�絻   ");
		break;
	case eCharacterExpression::GrassHopperDead:
		strcpy_s(character[(int)characterName].CharacterIMG[5], "   ′其 ′用用☉用‵用－�絻   ");
		break;
	case eCharacterExpression::CamelCriketNormal:
		strcpy_s(character[(int)characterName].CharacterIMG[7], "  ㄞ早≒′早早早 /早早  太    ");
		break;
	case eCharacterExpression::CamelCriketDamaged:
		strcpy_s(character[(int)characterName].CharacterIMG[7], "  ㄞ早ˉ′早早早 /早早  太    ");
		break;
	case eCharacterExpression::CamelCriketDead:
		strcpy_s(character[(int)characterName].CharacterIMG[7], "  ㄞ早其′早早早 /早早  太    ");
		break;
	case eCharacterExpression::GandhiPissedOff:
		strcpy_s(character[(int)characterName].CharacterIMG[4], "      ㄗ建  建   弛           ");
		strcpy_s(character[(int)characterName].CharacterIMG[5], "        Ⅸ峙Ⅸ式式帕          ");
		strcpy_s(character[(int)characterName].CharacterIMG[7], "        ′姜 早 屋            ");
		break;
	case eCharacterExpression::GandhiSuperSaiyan:
		strcpy_s(character[(int)characterName].CharacterIMG[1], "      ㄗ′屋′屋ㄘ屋ㄘ        ");
		strcpy_s(character[(int)characterName].CharacterIMG[2], "     ㄗ′ㄗ′ 屋ㄘ屋ㄘ        ");
		strcpy_s(character[(int)characterName].CharacterIMG[3], "     ㄗ′_葀__屋ㄘ屋ㄘ        ");
		strcpy_s(character[(int)characterName].CharacterIMG[4], "      ㄗ屋葀建   屋ㄘ         ");
		strcpy_s(character[(int)characterName].CharacterIMG[5], "        ≡峙≡式  帕          ");
		strcpy_s(character[(int)characterName].CharacterIMG[6], "       汝<..>旬  ♁           ");
		strcpy_s(character[(int)characterName].CharacterIMG[7], "        ′壏 早 屋            ");
		strcpy_s(character[(int)characterName].CharacterIMG[8], "   ㄗ′  戌式   弛    屋ㄘ    ");
		strcpy_s(character[(int)characterName].CharacterIMG[9], "   屋  ′戎     戌式屋  ′    ");
		break;
	case eCharacterExpression::GandhiDead:
		strcpy_s(character[(int)characterName].CharacterIMG[4], "      ㄗ屋  建   弛           ");
		strcpy_s(character[(int)characterName].CharacterIMG[5], "        其峙其式式帕          ");
		strcpy_s(character[(int)characterName].CharacterIMG[7], "        ′''\"早 屋            ");
		break;
	}

	CharacterDisplay(characterName, character);
}