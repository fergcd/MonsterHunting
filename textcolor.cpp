#include"Header.h"

void textcolor(WORD color)	//���� �� ����
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}