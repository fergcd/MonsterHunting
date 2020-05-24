#include"Header.h"

void Blink(char CharacterName[21], int x, int y, WORD color)	//±ÛÀÚ ±ôºıÀÓ È¿°ú
{
	int blinkCount = 1;

	gotoxy(x, y);
	while (blinkCount <= 20)
	{
		textcolor(color);
		printf("%s", CharacterName);
		Sleep(30);
		gotoxy(x, y);
		textcolor(LIGHTGRAY);
		printf("%s", CharacterName);
		Sleep(30);
		gotoxy(x, y);
		blinkCount++;
	}
}