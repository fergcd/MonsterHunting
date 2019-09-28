#include"Header.h"

void textcolor(int color)	//글자 색 변경
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (unsigned short)color);
}