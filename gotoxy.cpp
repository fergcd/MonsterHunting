#include"Header.h"

void gotoxy(int x, int y)	//Ŀ�� ��ġ ����
{
	COORD XY = {(SHORT)(x-1), (SHORT)(y-1)};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), XY);
}