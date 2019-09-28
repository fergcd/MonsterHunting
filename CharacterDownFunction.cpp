#include"Header.h"

void CharacterDownFunction(int index, sCharacter* character, int x, int y)	//CharacterDown에서 쓰이는 함수
{
	int row = 1, LineFeed = 0;

	for(; LineFeed <= 11; LineFeed++)
	{
		for(row = 1; row <= 11; row++)	//사이즈 30x11
		{
			if(row + LineFeed <= 11)
			{
				gotoxy(x, y + row + LineFeed);
				printf("%s", character[index].CharacterIMG[row - 1]);
			}
		}
		Sleep(15);
	}
}