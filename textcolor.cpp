#include"Header.h"

void textcolor(int color)	//���� �� ����
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (unsigned short)color);
}