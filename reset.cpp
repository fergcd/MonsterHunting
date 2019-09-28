#include"Header.h"

void reset(sCharacter* character)	//게임을 다시 시작할 시 모든 캐릭터의 상태를 초기화 합니다.
{
	KillingCount = 0;

	resetFunction(character, 0, 10, 10, 5);	//플레이어
	strcpy(character[0].name, "플레이어");
	strcpy(character[0].CharacterIMG[0], "                              ");
	strcpy(character[0].CharacterIMG[1], "        ■■■■■            ");
	strcpy(character[0].CharacterIMG[2], "      ■■■■■■            ");
	strcpy(character[0].CharacterIMG[3], "      ■■■■Λ■■          ");
	strcpy(character[0].CharacterIMG[4], "      ■■■■■■■          ");
	strcpy(character[0].CharacterIMG[5], "      ■■■■■■            ");
	strcpy(character[0].CharacterIMG[6], "        ■■■■■■          ");
	strcpy(character[0].CharacterIMG[7], "      ■■■■■              ");
	strcpy(character[0].CharacterIMG[8], "    ■■■■■■■            ");
	strcpy(character[0].CharacterIMG[9], "   ■■■■■■■■           ");
	strcpy(character[0].CharacterIMG[10], "  ■■■■■■■■■          ");


	resetFunction(character, 1, 1, 1, 1);	//돌멩이

	resetFunction(character, 2, 1, 1, 0);	//꽃

	resetFunction(character, 3, 20, 20, 1);	//나무

	resetFunction(character, 4, 6, 6, 1);	//개미

	resetFunction(character, 5, 10, 10, 2);	//메뚜기
	strcpy(character[5].CharacterIMG[5], "   ＼◎ ＼ΞΞ∬Ξ∥Ξ∠＿_   ");

	resetFunction(character, 6, 30, 30, 3);	//미적분학책

	resetFunction(character, 7, 44, 44, 4);	//수류탄

	resetFunction(character, 8, 69, 69, 19);	//빌리
	strcpy(character[8].CharacterIMG[1], "         凸  ㏄㏄             ");
	strcpy(character[8].CharacterIMG[2], "        ノ）（д`） 凸        ");
	strcpy(character[8].CharacterIMG[6], "          （˚∀˚）          ");

	resetFunction(character, 9, 14, 14, 4);	//곱등이
	strcpy(character[9].CharacterIMG[7], "  ／┃●＼┃┃┃ /┃┃  ㅣ    ");

	resetFunction(character, 10, 10, 10, 0);	//간디
	strcpy(character[10].CharacterIMG[0], "                              ");
	strcpy(character[10].CharacterIMG[1], "          .---._              ");
	strcpy(character[10].CharacterIMG[2], "        ノ      '.            ");
	strcpy(character[10].CharacterIMG[3], "       ∫_三__   │           ");
	strcpy(character[10].CharacterIMG[4], "      （━  ━   │           ");
	strcpy(character[10].CharacterIMG[5], "        ●ハ●──ß          ");
	strcpy(character[10].CharacterIMG[6], "       ┝<..>┓  ∫           ");
	strcpy(character[10].CharacterIMG[7], "        ＼''\"┃ ノ            ");
	strcpy(character[10].CharacterIMG[8], "    ___  └─   │    __      ");
	strcpy(character[10].CharacterIMG[9], "   ／  ＼┘     └─ノ  ＼    ");
	strcpy(character[10].CharacterIMG[10], "  │     ＼-────     │   ");
}