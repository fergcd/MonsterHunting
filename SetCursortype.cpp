#include"Header.h"

void SetCursorType(CURSOR_TYPE c)	//Ŀ���� ������ �����մϴ�. �Ű����� c�� NOCURSOR�� Ŀ�� ����, SHOWCURSOR�� Ŀ�� ǥ�� 
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
		gotoxy(70, 23);	//Ŀ�� ��ġ�� �޽����ڽ� ���� �ϴܿ� ����
		break;
	default:
		break;
	}
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);
}