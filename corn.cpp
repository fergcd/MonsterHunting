#include"Header.h"

void corn()	//¿Á¼ö¼ö
{
	char corn[4][13] = {"      ¢Ë¢Ë",
				 	    "   ¢Ë¢Ë¢Ë",
				 	    " ¢Ë¢Ë¢Ë",
				 	    "¢Ë¢Ë"};

	char remove_corn[4][11] = {"          ",
				 	           "         ",
				 	           "       ",
				 	           "    "};

	char hair[2][9] = {"  ¡á¡á",
					   "¡á"};

	char remove_hair[2][7] = {"      ",
					  	      "  "};


	int row = 0, twinkle = 0, x, y, turn = 0;

	SetCursorType(NOCURSOR);

	textcolor(14);
	for(y = 0; y <= 5; y++)
	{
		for(row = 0; row <= 3; row++)
		{
			gotoxy(43, 10 - y + row);
			printf("%s", corn[row]);
		}
		if(y == 0)
			Sleep(300);
		else
			Sleep(30);
		for(row = 0; row <= 3; row++)
		{
			gotoxy(43, 10 - y + row);
			if(y == 5)
				printf("%s", corn[row]);
			else
				printf("%s", remove_corn[row]);
		}
	}

	Sleep(1000);

	for(twinkle = 0; twinkle <= 15; twinkle++)
	{
		textcolor(15);
		for(row = 0; row <= 3; row++)
		{
			gotoxy(43, 5 + row);
			printf("%s", corn[row]);
		}
		Sleep(30);
		//_getch();
		textcolor(14);
		for(row = 0; row <= 3; row++)
		{
			gotoxy(43, 5 + row);
			if(twinkle == 15)
				printf("%s", remove_corn[row]);
			else
				printf("%s", corn[row]);
		}
		Sleep(30);
		//_getch();
	}

	for(x = 0, y = 0; x <= 42; x += 2)
	{
		if(turn == 0)
		{
			textcolor(15);
			turn++;
		}
		else
		{
			textcolor(14);
			turn--;
		}
		for(row = 0; row <= 3; row++)
		{
			gotoxy(43 - x, 5 + y + row);
			printf("%s", corn[row]);
		}
		Sleep(1);
		for(row = 0; row <= 3; row++)
		{
			gotoxy(43 - x, 5 + y + row);
			printf("%s", remove_corn[row]);
		}
		if(x != 0 && x % 4 == 0)
			y++;
	}
	
	Sleep(300);

	textcolor(7);
	for(y = 0; y <= 4; y++)
	{
		for(row = 0; row <= 1; row++)
		{
			gotoxy(9, 11 + row + y);
			printf("%s", hair[row]);
		}
		Sleep(30);
		for(row = 0; row <= 1; row++)
		{
			gotoxy(9, 11 + row + y);
			if(y == 4)
				printf("%s", hair[row]);
			else
				printf("%s", remove_hair[row]);
		}
	}

	SetCursorType(SHOWCURSOR);
}