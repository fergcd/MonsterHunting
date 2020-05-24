#include"Header.h"

void StateDisplay(int index, sCharacter* character, int previousHP, int previousAP, int x, int y)	//Battle에서 캐릭터 상태 표시
{
	int HPdisplay = 1;
	int APdisplay = 1;

	SetCursorType(NOCURSOR);

	if (previousHP == 0)	//전투 시작시 체력, 공격력 표시
	{
		gotoxy(x, y);
		printf("<%s>", character[index].name);	//캐릭터 이름
		gotoxy(x, y + 1);
		printf("체력 ");	//캐릭터 체력바	(플레이어 |×35  몬스터 |×70)
		gotoxy(x, y+2);
		printf("           0 /");	//캐릭터 체력 수치
		gotoxy(x, y+3);
		printf("공격력:  0");	//캐릭터 공격력 수치
		Sleep(500);
		for (; HPdisplay <= character[index].HealthPoint || APdisplay <= character[index].AttackPoint; HPdisplay++, APdisplay++)
		{
			if (HPdisplay <= character[index].HealthPoint)
			{
				gotoxy(x + 4 + HPdisplay, y + 1);
				printf("|");	//캐릭터 체력바 출력
				gotoxy(x + 10, y + 2);
				printf("%2d", HPdisplay);	//캐릭터 체력 수치 출력
			}
			
			if (APdisplay <= character[index].AttackPoint)
			{
				gotoxy(x + 8, y + 3);
				printf("%2d", APdisplay);	//캐릭터 공격력 수치 출력
			}

			Sleep(15);
		}
		gotoxy(x + 15, y + 2);
		character[index].MaxHealthPoint = character[index].HealthPoint;
		printf("%2d", character[index].MaxHealthPoint);	//캐릭터 최대체력 출력
	}

	if (previousHP == character[index].HealthPoint && previousAP == character[index].AttackPoint)	//현재 체력, 공격력을 애니메이션 없이 바로 표시(StateCharacterDisplay 함수에서 쓰입니다)
	{
		gotoxy(x, y);
		printf("<%s>", character[index].name);	//캐릭터 이름
		gotoxy(x, y + 1);
		printf("체력 ");	//캐릭터 체력바	(플레이어 |×35  몬스터 |×70)
		gotoxy(x, y+2);
		printf("           0 /");	//캐릭터 체력 수치
		gotoxy(x, y+3);
		printf("공격력:  0");	//캐릭터 공격력 수치

		for (; HPdisplay <= character[index].HealthPoint || APdisplay <= character[index].AttackPoint; HPdisplay++, APdisplay++)
		{
			if (HPdisplay <= character[index].HealthPoint)
			{
				if (index == 0)
				{
					gotoxy(x + 4 + HPdisplay, y + 1);
					printf("|");	//캐릭터 체력바 출력
				}
				gotoxy(x + 10, y + 2);
				printf("%2d", HPdisplay);	//캐릭터 체력 수치 출력
			}
			
			if (APdisplay <= character[index].AttackPoint)
			{
				gotoxy(x + 8, y + 3);
				printf("%2d", APdisplay);	//캐릭터 공격력 수치 출력
			}
		}
		gotoxy(x + 15, y + 2);
		character[index].MaxHealthPoint = character[index].HealthPoint;
		printf("%2d", character[index].MaxHealthPoint);	//캐릭터 최대체력 출력
	}

	if ((previousHP != 0 && character[index].HealthPoint != previousHP) || character[index].AttackPoint > previousAP)	//HP 감소/증가 및 AP 증가
	{
		for (; HPdisplay <= abs(character[index].HealthPoint - previousHP) || APdisplay <= character[index].AttackPoint - previousAP; HPdisplay++, APdisplay++)
		{
			if (character[index].HealthPoint <= previousHP - HPdisplay)	//HP 바 감소
			{
				gotoxy(x + 5 + previousHP - HPdisplay, y + 1);
				printf(" ");
			}
			else if (character[index].HealthPoint >= previousHP + HPdisplay)	//HP 바 증가
			{
				gotoxy(x + 4 + previousHP + HPdisplay, y + 1);
				printf("|");
			}

			gotoxy(x + 10, y + 2);
			if (character[index].HealthPoint <= previousHP - HPdisplay)	//HP 수치 감소
			{
				printf("%2d", previousHP - HPdisplay);
			}
			else if (character[index].HealthPoint >= previousHP + HPdisplay)	//HP 수치 증가
			{
				printf("%2d", previousHP + HPdisplay);
			}

			if (character[index].HealthPoint > previousHP && HPdisplay == abs(character[index].HealthPoint - previousHP))
			{
				gotoxy(x + 15, y + 2);
				character[index].MaxHealthPoint = character[index].HealthPoint;
				printf("%2d", character[index].MaxHealthPoint);	//HP 증가에 따른 캐릭터 최대체력 조정
			}

			if (character[index].AttackPoint >= previousAP + APdisplay)	//AP 수치 증가
			{
				gotoxy(x + 8, y + 3);
				printf("%2d", previousAP + APdisplay);
			}

			if (index == 10 && character[index].AttackPoint == 444)
			{
				Sleep(1);
			}
			else
			{
				Sleep(30);
			}
		}
	}

	SetCursorType(SHOWCURSOR);
}