#include"Header.h"

void CharacterDisplayFunction(int index, sCharacter* character, int x, int y)	//CharacterDisplay���� ���̴� �Լ�
{
	int row = 1;

	while(row <= 11)
	{
		gotoxy(x, y + row);
		printf("%s", character[index].CharacterIMG[row++ - 1]);
	}
}