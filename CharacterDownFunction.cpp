#include"Header.h"

void CharacterDownFunction(eCharacterName characterName, sCharacter* character, int x, int y)	//CharacterDown���� ���̴� �Լ�
{
	int row = 1, LineFeed = 0;

	for(; LineFeed <= 11; LineFeed++)
	{
		for(row = 1; row <= 11; row++)	//������ 30x11
		{
			if(row + LineFeed <= 11)
			{
				gotoxy(x, y + row + LineFeed);
				printf("%s", character[(int)characterName].CharacterIMG[row - 1]);
			}
		}
		Sleep(15);
	}
}