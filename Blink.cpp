#include"Header.h"

void Blink(char CharacterName[21], int x, int y, int colour)	//±ÛÀÚ ±ôºıÀÓ È¿°ú
{
	int blink = 1;

	gotoxy(x, y);
	while(blink <= 20)
		{
			textcolor(colour);
			printf("%s", CharacterName);
			Sleep(30);
			gotoxy(x, y);
			textcolor(7);
			printf("%s", CharacterName);
			Sleep(30);
			gotoxy(x, y);
			blink++;
		}
}