#include"Header.h"

void gotoxy(SHORT x, SHORT y)	//Ŀ�� ��ġ ����
{
	COORD XY = { (x - 1), (y - 1) };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), XY);
}