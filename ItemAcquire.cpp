#include"Header.h"

void ItemAcquire(int index, sCharacter* character)	//¾ÆÀÌÅÛ ½Àµæ ¾Ö´Ï¸ÞÀÌ¼Ç
{
	int x = 22, y = 19, blink = 0, turn = 0;

	char flower[5][22] = {"  ¡Ü",
						  "¡Ü¡Ý¡Ü",
						  " ¡Ü¡Ü",
						  "  ¦­",
						  "¢Ð¦À¢Ñ"};

	char fruit[4][22] = {"   ¡î",
					     "  «Î¡¬",
						 "£¨`¬Õ`£©",
						 "  ¡¬_«Î"};

	char grenade[7][22] = {"   ¡Û",
		                   "   ¦¢",
						   "  ¡à¡à",
						   " ¡à¡à¡à",
						   "¡à¡à¡à¡à",
						   "¡à¡à¡à¡à",
						   " ¡à¡à¡à"};

	char corn[6][22] = {" ¢Ë ",
					    "¢Ë¢Ë",
					    "¢Ë¢Ë",
					    "¢Ë¢Ë",
					    "¢Ë¢Ë",
					    " ¢Ë"};

	SetCursorType(NOCURSOR);

	arm(-1, "¡á");

	Sleep(300);

	for(blink = 0; blink <= 15; blink++)
	{
		if(index <= 10)
		{
			if(turn == 0)
			{
				textcolor(0);
				turn++;
			}
			else
			{
				if(index == 10)
					textcolor(14);
				else
					textcolor(7);
				turn--;
			}
		}
		switch(index)
		{
		case 1:	//Â¯µ¹
			gotoxy(29, 12);
			printf("¡Ü");
			break;
		case 2:	//²É
		case 12:
			ItemAcquireFunction(27, 8, 4, flower);
			break;
		case 3:	//³ª¹«¿­¸Å
			ItemAcquireFunction(26, 9, 3, fruit);
			break;
		case 7:	//¼ö·ùÅº
		case 17:
			ItemAcquireFunction(26, 6, 6, grenade);
			break;
		case 10:	//¿Á¼ö¼ö
			ItemAcquireFunction(28, 7, 5, corn);
			break;
		}
		Sleep(30);
	}
	textcolor(7);

	switch(index)
	{
	case 12:
		EatItem(index, character, flower);
		break;
	case 13:
		EatItem(index, character, fruit);
		break;
	case 17:
		EatItem(index, character, grenade);
		Sleep(600);
		break;
	}

	SetCursorType(SHOWCURSOR);
}