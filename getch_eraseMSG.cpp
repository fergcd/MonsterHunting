#include"Header.h"

void getch_eraseMSG()	//_getch()랑 eraseMSG() 기능 합친 함수. 여러번 쓰이길레 만들었습니다.
{
	int dummy = _getch();
	eraseMSG();
}