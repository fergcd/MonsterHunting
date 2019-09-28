#include"Header.h"

void boom()	//Æã
{
	char body[5][4][40] = {{"        ¡á¡á¡á¡á¡á            ",
					        "      ¡á¡á¡á¡á¡á¡á¡á          ",
					        "     ¡á¡á¡á¡á¡á¡á¡á¡á         ",
				   	        "    ¡á¡á¡á¡á¡á¡á¡á¡á¡á        "},
						   {"        ¡á¡á¡á¡á¡á            ",
					        "     ¡á¡á¡á ¡á ¡á¡á¡á         ",
					        "    ¡á¡á¡á ¡á¡á ¡á¡á¡á        ",
				   	        "   ¡á¡á¡á¡á ¡á ¡á¡á¡á¡á       "},
						   {"        ¡á¡á¡á¡á¡á            ",
					        "    ¡á¡á ¡á ¡á ¡á ¡á¡á        ",
					        "   ¡á¡á ¡á ¡á¡á ¡á ¡á¡á       ",
				   	        "  ¡á¡á¡á ¡á ¡á ¡á ¡á¡á¡á      "},
						   {"        ¡á¡á¡á¡á¡á            ",
					        "   ¡á ¡á ¡á ¡á ¡á ¡á ¡á       ",
					        "  ¡á ¡á ¡á ¡á¡á ¡á ¡á ¡á      ",
				   	        " ¡á¡á ¡á ¡á ¡á ¡á ¡á ¡á¡á     "},
				   	       {"       ¡á ¡á¡á¡á ¡á           ",
					        "   ¡á ¡á ¡á ¡á ¡á ¡á ¡á       ",
					        "  ¡á ¡á ¡á ¡á¡á ¡á ¡á ¡á      ",
							"¡á ¡á ¡á ¡á ¡á ¡á ¡á ¡á ¡á    "}};

	int row, frame;

	SetCursorType(NOCURSOR);

	for(frame = 0; frame <= 8; frame++)
	{
		for(row = 0; row <= 3; row++)
		{
			gotoxy(1, 17 + row);
			if(frame >= 4)
				printf("%s", body[8 - frame][row]);
			else
				printf("%s", body[frame][row]);
		}
		if(frame == 4)
			Sleep(100);
		else
			Sleep(15);
	}

	Sleep(500);

	for(frame = 1; frame <= 30; frame++)
	{
		if(frame % 2 == 0)
			textcolor(0);
		else
			textcolor(12);
		gotoxy(33, 12);
		printf("¢¥");
		gotoxy(27, 13);
		printf("¢Æ ¢Æ  ¢¥");
		gotoxy(25, 14);
		printf("¢Æ¢Æ ¢¥   ¢Æ");
		gotoxy(21, 15);
		printf("¢Æ¢Æ¢Æ¢Æ¢Æ ¢Æ ¡È");
		gotoxy(25, 16);
		printf("¢Æ¢Æ  `   ¢Æ");
		gotoxy(27, 17);
		printf("¢Æ ¢Æ  `");
		gotoxy(33, 18);
		printf("`");
		Sleep(20);
	}

	textcolor(7);

	SetCursorType(SHOWCURSOR);
}

/*          ¢¥ 
      ¢Æ ¢Æ  ¢¥
    ¢Æ¢Æ ¢¥   ¢Æ
¢Æ¢Æ¢Æ¢Æ¢Æ ¢Æ ¡È 
    ¢Æ¢Æ  `   ¢Æ
      ¢Æ ¢Æ  `
         `
            `
*/