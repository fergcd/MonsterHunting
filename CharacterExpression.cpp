#include"Header.h"

void CharacterExpression(int index, sCharacter* character, int WhatExpression)	//Battle縑憮 議葛攪曖 ル薑 滲��
{
	switch(WhatExpression)
	{
	case 0:
		strcpy(character[index].CharacterIMG[3], "      ﹥﹥﹥﹥瓦﹥﹥          ");
		break;
	case 1:
		strcpy(character[index].CharacterIMG[3], "      ﹥﹥﹥﹥收﹥﹥          ");
		break;
	case 4:
		strcpy(character[index].CharacterIMG[3], "      ﹥﹥﹥﹥ˇ﹥﹥          ");
		break;
	case 444:
		strcpy(character[index].CharacterIMG[3], "      ﹥﹥﹥﹥▼﹥﹥          ");
		break;
	case 4444:
		strcpy(character[index].CharacterIMG[1], "                              ");
		strcpy(character[index].CharacterIMG[2], "                              ");
		strcpy(character[index].CharacterIMG[3], "                              ");
		strcpy(character[index].CharacterIMG[4], "                  ﹥          ");
		strcpy(character[index].CharacterIMG[5], "        ﹥﹥  ﹥﹥            ");
		strcpy(character[index].CharacterIMG[6], "      ﹥  ﹥﹥﹥﹥﹥          ");
		break;
	case 9:
		strcpy(character[index].CharacterIMG[3], "      ﹥﹥﹥﹥≠﹥﹥          ");
		break;
	case 10:
		strcpy(character[index].CharacterIMG[3], "      ﹥﹥﹥﹥≒﹥﹥          ");
		break;
	case 14:
		strcpy(character[index].CharacterIMG[3], "      ﹥﹥﹥﹥Ⅸ﹥﹥          ");
		break;
	case 18:
		strcpy(character[index].CharacterIMG[1], "         蠓  圻圻圻           ");
		strcpy(character[index].CharacterIMG[2], "        屋ㄘㄗ洛◥ㄘ蠓        ");
		strcpy(character[index].CharacterIMG[6], "          ㄗ◥洛◥ㄘ          ");
		break;
	case 84:
		strcpy(character[index].CharacterIMG[2], "        屋ㄘㄗ盈xㄘ 蠓        ");
		strcpy(character[index].CharacterIMG[6], "          ㄗ▼盈▼ㄘ          ");
		break;
	case 218:
		strcpy(character[index].CharacterIMG[2], "        屋ㄘㄗ洛４ㄘ蠓        ");
		strcpy(character[index].CharacterIMG[6], "          ㄗ４洛４ㄘ          ");
		break;
	case 50:
		strcpy(character[index].CharacterIMG[5], "   ′≡ ′用用☉用‵用－�絻   ");
		break;
	case 54:
		strcpy(character[index].CharacterIMG[5], "   ′其 ′用用☉用‵用－�絻   ");
		break;
	case 56:
		strcpy(character[index].CharacterIMG[5], "   ′ˉ ′用用☉用‵用－�絻   ");
		break;
	case 90:
		strcpy(character[index].CharacterIMG[7], "  ㄞ早≒′早早早 /早早  太    ");
		break;
	case 94:
		strcpy(character[index].CharacterIMG[7], "  ㄞ早其′早早早 /早早  太    ");
		break;
	case 96:
		strcpy(character[index].CharacterIMG[7], "  ㄞ早ˉ′早早早 /早早  太    ");
		break;
	case 69:
		strcpy(character[index].CharacterIMG[4], "      ㄗ建  建   弛           ");
		strcpy(character[index].CharacterIMG[5], "        Ⅸ峙Ⅸ式式帕          ");
		strcpy(character[index].CharacterIMG[7], "        ′姜 早 屋            ");
		break;
	case 6969:
		strcpy(character[index].CharacterIMG[1], "      ㄗ′屋′屋ㄘ屋ㄘ        ");
		strcpy(character[index].CharacterIMG[2], "     ㄗ′ㄗ′ 屋ㄘ屋ㄘ        ");
		strcpy(character[index].CharacterIMG[3], "     ㄗ′_葀__屋ㄘ屋ㄘ        ");
		strcpy(character[index].CharacterIMG[4], "      ㄗ屋葀建   屋ㄘ         ");
		strcpy(character[index].CharacterIMG[5], "        ≡峙≡式  帕          ");
		strcpy(character[index].CharacterIMG[6], "       汝<..>旬  ♁           ");
		strcpy(character[index].CharacterIMG[7], "        ′壏 早 屋            ");
		strcpy(character[index].CharacterIMG[8], "   ㄗ′  戌式   弛    屋ㄘ    ");
		strcpy(character[index].CharacterIMG[9], "   屋  ′戎     戌式屋  ′    ");
		break;
	case 104:
		strcpy(character[index].CharacterIMG[4], "      ㄗ屋  建   弛           ");
		strcpy(character[index].CharacterIMG[5], "        其峙其式式帕          ");
		strcpy(character[index].CharacterIMG[7], "        ′''\"早 屋            ");
		break;
	}

	CharacterDisplay(index, character);
}