#include"Header.h"

void gotoxy(int x, int y)	//Ŀ�� ��ġ ����
{
	COORD XY = {x-1, y-1};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), XY);
}