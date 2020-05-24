#include"Header.h"

void CharacterDisplayFunction(eCharacterName characterName, sCharacter* character, int x, int y)	//CharacterDisplay에서 쓰이는 함수
{
	int row = 1;

	while(row <= 11)
	{
		gotoxy(x, y + row);
		printf("%s", character[(int)characterName].CharacterIMG[row++ - 1]);
	}
}