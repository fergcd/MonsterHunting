#include"Header.h"

void ItemAcquireFunction(int x, int y, int MaxRow, char Item[][22])	//ItemAcquire���� ���̴� �Լ�
{
	for (int row = 0; row <= MaxRow; row++)
	{
		gotoxy(x, y + row);
		printf("%s", Item[row]);
	}
}