#include"Header.h"

void InputName(sCharacter* character)	//플레이어의 이름을 입력받습니다. 이름 입력 후 엔터를 치면 됩니다.
{
	unsigned int nameLength = 0;	//플레이어 이름 길이
	int result = 1;

	do
	{
		gotoxy(20, 8);
		printf("당신의 이름을 입력하고 엔터를 누르세요.\n\n");
		textcolor(12);
		gotoxy(1, 15);
		printf("        ※한글이름을 입력했다면 엔터치기 전에 [한/영] 키를 누르세요.\n");
		printf("        ※이름은 10byte 이내로 입력하세요.");
		textcolor(7);
		gotoxy(20, 10);
		printf("          ⇒ ");

		if (nameLength > 10 || 0 == result)	//이름 길이를 10byte로 제한
		{
			textcolor(12);
			gotoxy(33, 11);
			printf("이름이 너무 길어요!");
			textcolor(7);

			if (0 == result)
			{
				while (getchar() != '\n')
				{
				}
			}

			gotoxy(33, 10);
		}

		result = scanf_s("%s", character[0].name, 21);
		nameLength = strlen(character[0].name);

		if (nameLength > 10 || 0 == result)
		{
			system("cls");
		}

	} while (nameLength > 10 || 0 == result);
	
	gotoxy(33, 10);
	Blink(character[0].name, 33, 10, 14);

	system("cls");
}