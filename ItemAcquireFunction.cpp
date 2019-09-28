#include"Header.h"

void ItemAcquireFunction(int x, int y, int MaxRow, char Item[][22])	//ItemAcquire에서 쓰이는 함수
{
	int row = 0;

	for(row = 0; row <= MaxRow; row++)
	{
		gotoxy(x, y + row);
		printf("%s", Item[row]);
	}
}