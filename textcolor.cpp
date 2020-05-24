#include"Header.h"

void textcolor(WORD color)	//글자 색 변경
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}