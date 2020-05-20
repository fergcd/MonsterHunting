#include"Header.h"

void MouthOpenClose(int motion, char BigMouth[][22])	//플레이어 쩝쩝
{
	int y, row;
	char EraseHead[4][15] = {"            ",
				 		     "            ",
				 		     "              ",
						     "              "};

	SetCursorType(NOCURSOR);

	switch(motion)
	{
	case 1:
		for(y = 11; y >= 6; y--)	//9 7 6 입 크게 열기
		{
			for(row = 0; row <= 3; row++)
			{
				gotoxy(9, y + row);
				printf("%s", BigMouth[row]);
			}
			gotoxy(9, y + 4);
			if(y == 10)
				printf("■■■■■■  ");
			else if(y == 9 || y == 8)
			{
				for(row = 15; row >= 12; row--)
				{
					gotoxy(9, row);
					printf("■■■■■    ");
				}
			}
			else if(y == 7 || y == 6)
			{
				for(row = 15; row >= 10; row--)
				{
					gotoxy(9, row);
					printf("■■■■      ");
				}
				if(y == 6)
				{
					gotoxy(9, 16);
					printf("  ■■■      ");
					gotoxy(9, 17);
					printf("■■■■■■■");
				}
			}
			Sleep(30);
		}
		break;
	case 2:
		gotoxy(9, 16);
		printf("  ■■■■■■");
		gotoxy(9, 17);
		printf("■■■■■    ");
		for(y = 6; y <= 12; y++)	//9 7 6 크게 연 입 닫기
		{
			for(row = 0; row <= 3; row++)
			{
				gotoxy(9, y + row);
				printf("%s", BigMouth[row]);
			}
			Sleep(30);
			//_getch();
			if(y < 12)
			{
				for(row = 0; row <= 3; row++)
				{
					gotoxy(9, y + row);
					printf("%s", EraseHead[row]);
				}
			}
		}
		break;
	case 3:
		for(y = 12; y >= 10; y--)	//9 7 6 입 작게 열기
		{
			for(row = 0; row <= 3; row++)
			{
				gotoxy(9, y + row);
				printf("%s", BigMouth[row]);
			}
			gotoxy(9, y + 4);
			if(y == 10 || y == 11)
				printf("■■■■■    ");
			Sleep(30);
		}
		break;
	case 4:
		for(y = 10; y <= 12; y++)	//9 7 6 작게 연 입 닫기
		{
			for(row = 0; row <= 3; row++)
			{
				gotoxy(9, y + row);
				printf("%s", BigMouth[row]);
			}
			Sleep(30);
			if(y < 12)
			{
				for(row = 0; row <= 3; row++)
				{
					gotoxy(9, y + row);
					printf("%s", EraseHead[row]);
				}
			}
		}
		break;
	}

	SetCursorType(SHOWCURSOR);
}