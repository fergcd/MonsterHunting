#include"Header.h"

void ItemDeactivate(int x, int index, sCharacter* character)	//꽃, 나무, 수류탄에게서 얻을 수 있는 아이템 중 아직 안쓰러트린 몬스터의 아이템은 목록에서 안보이게 합니다.(1, 2, 6)
{
	gotoxy(x, 23);
	if (index == 0 && KillingCount >= 9 && character[0].HealthPoint == 1)
	{
		printf("필살기");
	}
	else if (character[index].HealthPoint > 0)
	{
		textcolor(BLACK);
		printf("%s", character[index].name);
		textcolor(LIGHTGRAY);
	}
	else
	{
		if (index == 1)
		{
			printf("짱돌");
		}
		else if (index == 8)
		{
			printf("도발");
		}
		else
		{
			printf("%s", character[index].name);
		}
	}
}