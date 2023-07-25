#include"Header.h"

void EatItem(int item, sCharacter* character, char Item[][22])	//æ∆¿Ã≈€ º∑√Î
{
	char BigMouth[7][22] = {"  °·°·°·°·°·",
							"°·°·°·°·°·°·",
							"°·°·°·°·•À°·°·",
							"°·°·°·°·°·°·°·",
							"°·°·°·°·°·°·",
							"  °·°·°·°·°·°·",
							"°·°·°·°·°·"};

	char eraseItem[7][22] = {"     ",
							 "     ",
							 "      ",
							 "       ",
							 "        ",
							 "        ",
							 "       "};

	int x = 0;
	int y = 0;
	int row = 0;
	int addx = 0;
	int addy = 0;
	int MaxRow = 0;
	int munch = 0;
	int frame = 0;

	if (item != 4)
	{
		MouthOpenClose(1, BigMouth);

		Sleep(300);

		switch (item)
		{
		case 12:
			x = 27;
			y = 8;
			MaxRow = 4;
			break;
		case 13:
			x = 26;
			y = 9;
			MaxRow = 3;
			break;
		case 17:
			x = 26;
			y = 6;
			MaxRow = 6;
			break;
		default:
			break;
		}

		for (addx = 0, addy = 0; addx <= 12; addx++)	//æ∆¿Ã≈€ ª¿‘
		{
			if (addx != 0 && addx % 3 == 0)
			{
				addy++;
			}
			//gotoxy(1, 1);
			//printf("%d %d", x - addx, y + addy);
			if (addx == 12 && item == 13)
			{
				strcpy_s(Item[2], "£®0ÏÃ0£©");
			}
			ItemAcquireFunction(x - addx, y + addy, MaxRow, Item);
			ItemAcquireFunction(9, 6, 3, BigMouth);
			for (row = 15; row >= 10; row--)
			{
				gotoxy(9, row);
				printf("°·°·°·°·");
			}
			gotoxy(9, 16);
			printf("  °·°·°·");

			arm(addx, "°·");

			Sleep(15);

			if (addx < 12)
			{
				ItemAcquireFunction(26 - addx, 6 + addy, 6, eraseItem);
				arm(addx, "  ");
			}
			ItemAcquireFunction(9, 6, 3, BigMouth);
		}

		Sleep(300);

		MouthOpenClose(2, BigMouth);
	}

	for (munch = 1; munch <= 5; munch++)
	{
		MouthOpenClose(3, BigMouth);
		Sleep(80);
		MouthOpenClose(4, BigMouth);
	}

	if (item != 4)
	{
		for (frame = 15; frame <= 19; frame++)
		{
			arm(frame, "  ");
			Sleep(30);
		}
	}

	for (row = 0; row <= 10; row++)
	{
		gotoxy(3, 10 + row);
		printf("%s", character[0].CharacterIMG[row]);
	}
}