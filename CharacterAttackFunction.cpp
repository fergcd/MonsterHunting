#include"Header.h"

void CharacterAttackFunction(int index, sCharacter* character, int x, int y)	//CharacterAttack에서 쓰이는 함수 x = 3, y = 9	x = 43, y = 2
{
	int row = 1, xAdd = 0;

	for(; xAdd <= 5; xAdd++)
	{
		if(y == 9)
			CharacterDisplayFunction(index, character, x + xAdd, y);
		else
			CharacterDisplayFunction(index, character, x - xAdd, y);
		Sleep(15);
	}
	Sleep(100);
	for(xAdd = 0; xAdd <= 5; xAdd++)
	{
		if(y == 9)
			CharacterDisplayFunction(index, character, x + 5 - xAdd, y);
		else
			CharacterDisplayFunction(index, character, x - 5 + xAdd, y);
		Sleep(15);
	}
}