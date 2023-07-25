#include"Header.h"

void gotoxy(SHORT x, SHORT y)	//커서 위치 제어
{
	COORD XY = { (x - 1), (y - 1) };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), XY);
}