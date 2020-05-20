#include"Header.h"

void CharacterExpression(int index, sCharacter* character, int WhatExpression)	//Battle¿¡¼­ Ä³¸¯ÅÍÀÇ Ç¥Á¤ º¯È­
{
	switch(WhatExpression)
	{
	case 0:
		strcpy_s(character[index].CharacterIMG[3], "      ¡á¡á¡á¡á¥Ë¡á¡á          ");
		break;
	case 1:
		strcpy_s(character[index].CharacterIMG[3], "      ¡á¡á¡á¡á¦¬¡á¡á          ");
		break;
	case 4:
		strcpy_s(character[index].CharacterIMG[3], "      ¡á¡á¡á¡á£¾¡á¡á          ");
		break;
	case 44:
		strcpy_s(character[index].CharacterIMG[3], "      ¡á¡á¡á¡á¡¿¡á¡á          ");
		break;
	case 444:
		strcpy_s(character[index].CharacterIMG[1], "                              ");
		strcpy_s(character[index].CharacterIMG[2], "                              ");
		strcpy_s(character[index].CharacterIMG[3], "                              ");
		strcpy_s(character[index].CharacterIMG[4], "                  ¡á          ");
		strcpy_s(character[index].CharacterIMG[5], "        ¡á¡á  ¡á¡á            ");
		strcpy_s(character[index].CharacterIMG[6], "      ¡á  ¡á¡á¡á¡á¡á          ");
		break;
	case 9:
		strcpy_s(character[index].CharacterIMG[3], "      ¡á¡á¡á¡á¡Ú¡á¡á          ");
		break;
	case 10:
		strcpy_s(character[index].CharacterIMG[3], "      ¡á¡á¡á¡á¡Ü¡á¡á          ");
		break;
	case 14:
		strcpy_s(character[index].CharacterIMG[3], "      ¡á¡á¡á¡á¢Á¡á¡á          ");
		break;
	case 4444:
		strcpy_s(character[index].CharacterIMG[1], "         Ò¬  §¦§¦§¦           ");
		strcpy_s(character[index].CharacterIMG[2], "        «Î£©£¨¬¥¢ª£©Ò¬        ");
		strcpy_s(character[index].CharacterIMG[6], "          £¨¢ª¬¥¢ª£©          ");
		break;
	case 44444:
		strcpy_s(character[index].CharacterIMG[2], "        «Î£©£¨¬Õx£© Ò¬        ");
		strcpy_s(character[index].CharacterIMG[6], "          £¨¡¿¬Õ¡¿£©          ");
		break;
	case 444444:
		strcpy_s(character[index].CharacterIMG[2], "        «Î£©£¨¬¥¢³£©Ò¬        ");
		strcpy_s(character[index].CharacterIMG[6], "          £¨¢³¬¥¢³£©          ");
		break;
	case 50:
		strcpy_s(character[index].CharacterIMG[5], "   ¡¬¡Ý ¡¬¥Î¥Î¡ó¥Î¡«¥Î¡Ð£ß_   ");
		break;
	case 54:
		strcpy_s(character[index].CharacterIMG[5], "   ¡¬¨ä ¡¬¥Î¥Î¡ó¥Î¡«¥Î¡Ð£ß_   ");
		break;
	case 56:
		strcpy_s(character[index].CharacterIMG[5], "   ¡¬£¼ ¡¬¥Î¥Î¡ó¥Î¡«¥Î¡Ð£ß_   ");
		break;
	case 90:
		strcpy_s(character[index].CharacterIMG[7], "  £¯¦­¡Ü¡¬¦­¦­¦­ /¦­¦­  ¤Ó    ");
		break;
	case 94:
		strcpy_s(character[index].CharacterIMG[7], "  £¯¦­¨ä¡¬¦­¦­¦­ /¦­¦­  ¤Ó    ");
		break;
	case 96:
		strcpy_s(character[index].CharacterIMG[7], "  £¯¦­£¼¡¬¦­¦­¦­ /¦­¦­  ¤Ó    ");
		break;
	case 66:
		strcpy_s(character[index].CharacterIMG[4], "      £¨«Ø  «Ø   ¦¢           ");
		strcpy_s(character[index].CharacterIMG[5], "        ¢Á«Ï¢Á¦¡¦¡©¬          ");
		strcpy_s(character[index].CharacterIMG[7], "        ¡¬«¸ ¦­ «Î            ");
		break;
	case 6666:
		strcpy_s(character[index].CharacterIMG[1], "      £¨¡¬«Î¡¬«Î£©«Î£©        ");
		strcpy_s(character[index].CharacterIMG[2], "     £¨¡¬£¨¡¬ «Î£©«Î£©        ");
		strcpy_s(character[index].CharacterIMG[3], "     £¨¡¬_ß²__«Î£©«Î£©        ");
		strcpy_s(character[index].CharacterIMG[4], "      £¨«Îß²«Ø   «Î£©         ");
		strcpy_s(character[index].CharacterIMG[5], "        ¡Ý«Ï¡Ý¦¡  ©¬          ");
		strcpy_s(character[index].CharacterIMG[6], "       ¦¼<..>¦¯  ¡ò           ");
		strcpy_s(character[index].CharacterIMG[7], "        ¡¬ìÌ ¦­ «Î            ");
		strcpy_s(character[index].CharacterIMG[8], "   £¨¡¬  ¦¦¦¡   ¦¢    «Î£©    ");
		strcpy_s(character[index].CharacterIMG[9], "   «Î  ¡¬¦¥     ¦¦¦¡«Î  ¡¬    ");
		break;
	case 104:
		strcpy_s(character[index].CharacterIMG[4], "      £¨«Î  «Ø   ¦¢           ");
		strcpy_s(character[index].CharacterIMG[5], "        ¨ä«Ï¨ä¦¡¦¡©¬          ");
		strcpy_s(character[index].CharacterIMG[7], "        ¡¬''\"¦­ «Î            ");
		break;
	}

	CharacterDisplay(index, character);
}