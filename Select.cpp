#include"Header.h"

eCharacterName Select(sCharacter* character)	//상대할 몬스터 선택
{
	int x = 1;
	int y = 1;
	int index = 1;
	int NoDuplication = 1;
	eCharacterName selectedMonster = eCharacterName::Player;

	while (index <= 10)	//상대할 몬스터 목록 출력
	{
		if(character[index].HealthPoint <= 0)	//쓰러트린 몬스터는 목록에서 안보이게 합니다.
		{
			textcolor(BLACK);
			printf("%-11s", character[index].name);
			textcolor(LIGHTGRAY);
		}
		else
		{
			printf("%-11s", character[index].name);
		}

		if (index == 5)
		{
			printf("\n");
		}

		index++;
	}
	//printf("돌멩이     꽃         나무       개미       메뚜기\n");//1,1	12,1	23,1	34,1	45,1
	//printf("미적분학책 수류탄     빌리       곱등이     간디");  //1,2	12,2	23,2	34,2	45,2

	gotoxy(15, 12);
	printf("방향키로 쓰러트리고싶은 몬스터 선택하고 엔터를 누르세요");

	gotoxy(x, y);

	while (NoDuplication == 1)	//안쓰러트린 몬스터 선택할 때까지
	{
		switch (_getch())
		{
		case 72:	//위
			if (y == 2)
			{
				y--;
			}
			break;
		case 80:	//아래
			if (y == 1)
			{
				y++;
			}
			break;
		case 75:	//왼쪽
			if (x >= 12 && x <= 45)
			{
				x -= 11;
			}
			break;
		case 77:	//오른쪽
			if (x >= 1 && x <= 34)
			{
				x += 11;
			}
			break;
		case 13:	//엔터
			switch(x+y)
			{
			case 2:
				CheckDuplication(1, character, &NoDuplication, &selectedMonster, &x, &y);
				break;
			case 13:
				CheckDuplication(2, character, &NoDuplication, &selectedMonster, &x, &y);
				break;
			case 24:
				CheckDuplication(3, character, &NoDuplication, &selectedMonster, &x, &y);
				break;
			case 35:
				CheckDuplication(4, character, &NoDuplication, &selectedMonster, &x, &y);
				break;
			case 46:
				CheckDuplication(5, character, &NoDuplication, &selectedMonster, &x, &y);
				break;
			case 3:
				CheckDuplication(6, character, &NoDuplication, &selectedMonster, &x, &y);
				break;
			case 14:
				CheckDuplication(7, character, &NoDuplication, &selectedMonster, &x, &y);
				break;
			case 25:
				CheckDuplication(8, character, &NoDuplication, &selectedMonster, &x, &y);
				break;
			case 36:
				CheckDuplication(9, character, &NoDuplication, &selectedMonster, &x, &y);
				break;
			case 47:
				CheckDuplication(10, character, &NoDuplication, &selectedMonster, &x, &y);
				break;
			default:
				break;
			}
		default:
			break;
		}
		
		gotoxy(x, y);
	}

	system("cls");

	return selectedMonster;
}