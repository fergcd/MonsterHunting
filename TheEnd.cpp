#include"Header.h"

void TheEnd(sCharacter* character, char KillingCount)	//몬스터 10마리를 다 쓰러트렸거나 플레이어가 패배했을 때 엔딩화면을 출력합니다.
{
	if(character[0].HealthPoint <= 0)
	{
		gotoxy(35, 12);
		printf("Game Over");
	}
	else if(KillingCount == 10)
	{
		gotoxy(25, 11);
		printf("모든 몬스터들을 쓰러트렸습니다.");
		gotoxy(30, 13);
		printf("당신은 최강자입니다.");
		gotoxy(36, 16);
		printf("The End");
	}

	gotoxy(19, 20);
	Sleep(1500);
	printf("아무키나 누르면 타이틀 화면으로 이동합니다.");
	getch();
	system("cls");
}