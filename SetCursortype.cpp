#include"Header.h"

void SetCursorType(CURSOR_TYPE c)	//커서의 유무를 설정합니다. 매개변수 c가 NOCURSOR면 커서 없앰, SHOWCURSOR면 커서 표시 
{
	CONSOLE_CURSOR_INFO CurInfo = { 1, FALSE };

	switch (c)
	{
	case NOCURSOR:
		CurInfo.dwSize = 1;
		CurInfo.bVisible = FALSE;
		break;
	case SHOWCURSOR:
		CurInfo.dwSize = 100;
		CurInfo.bVisible = TRUE;
		gotoxy(70, 23);	//커서 위치를 메시지박스 우측 하단에 고정
		break;
	default:
		break;
	}
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);
}