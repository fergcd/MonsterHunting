#include"Header.h"

void gotoxy(int x, int y)	//커서 위치 제어
{
	COORD XY = {(SHORT)(x-1), (SHORT)(y-1)};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), XY);
}