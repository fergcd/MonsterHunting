#include"Header.h"

void CharacterDisplayFunction(eCharacterName characterName, sCharacter* character, int x, int y)	//CharacterDisplay���� ���̴� �Լ�
{
	int row = 1;

	while(row <= 11)
	{
		gotoxy(x, y + row);
		printf("%s", character[(int)characterName].CharacterIMG[row++ - 1]);
	}
}