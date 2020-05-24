#include"Header.h"

void Use_Item_or_Skill(int x, int y, eCharacterName characterName, sCharacter* character)	//아이템 또는 기술 사용 애니메이션 함수
{
	char Fuck_You_[9][11][41] = {{"                              ",	//도발, 원레 [9][11][31]이었으나 소스파일 확장자를 c에서 cpp로 바꾸니까 캐릭터 그리는 데 쓰인 2byte짜리 특수문자 크기가 3byte로 커져서 수정
					  		      "        ■■■■■            ",
							      "      ■■■■■■            ",
							      "      ■■■■Λ■■          ",
							      "      ■■■■■■■          ",
							      "      ■■■■■■            ",
							      "        ■■■■■■          ",
							      "      ■■■■■              ",
							      "    ■■■■■■■            ",
							      "   ■■■■■■■■           ",
							      "  ■■■■■■■■■          "},
	                             {"                              ",
					  		      "        ■■■■■            ",
							      "      ■■■■■■            ",
							      "      ■■■■Λ■■          ",
							      "      ■■■■■■■          ",
							      "      ■■■■■■            ",
							      "        ■■■■■■          ",
							      "      ■■■■■              ",
							      "    ■■■■■■■            ",
							      "   ■■■■■■■■■         ",
							      "  ■■■■■■■■■          "},
								 {"                              ",
					  		      "        ■■■■■            ",
							      "      ■■■■■■            ",
							      "      ■■■■Λ■■          ",
							      "      ■■■■■■■          ",
							      "      ■■■■■■            ",
							      "        ■■■■■■          ",
							      "      ■■■■■              ",
							      "    ■■■■■■■            ",
							      "   ■■■■■■■■■■       ",
							      "  ■■■■■■■■■          "},
								 {"                              ",
					  		      "        ■■■■■            ",
							      "      ■■■■■■            ",
							      "      ■■■■Λ■■          ",
							      "      ■■■■■■■          ",
							      "      ■■■■■■            ",
							      "        ■■■■■■          ",
							      "      ■■■■■              ",
							      "    ■■■■■■■     ■     ",
							      "   ■■■■■■■■■■       ",
							      "  ■■■■■■■■■          "},
								 {"                              ",
					  		      "        ■■■■■            ",
							      "      ■■■■■■            ",
							      "      ■■■■Λ■■          ",
							      "      ■■■■■■■          ",
							      "      ■■■■■■            ",
							      "        ■■■■■■          ",
							      "      ■■■■■        ■    ",
							      "    ■■■■■■■     ■     ",
							      "   ■■■■■■■■■■       ",
							      "  ■■■■■■■■■          "},
								 {"                              ",
					  		      "        ■■■■■            ",
							      "      ■■■■■■            ",
							      "      ■■■■Λ■■          ",
							      "      ■■■■■■■          ",
							      "      ■■■■■■            ",
							      "        ■■■■■■     ■   ",
							      "      ■■■■■        ■    ",
							      "    ■■■■■■■     ■     ",
							      "   ■■■■■■■■■■       ",
							      "  ■■■■■■■■■          "},
								 {"                              ",
					  		      "        ■■■■■            ",
							      "      ■■■■■■            ",
							      "      ■■■■Λ■■          ",
							      "      ■■■■■■■          ",
							      "      ■■■■■■     ■■■ ",
							      "        ■■■■■■   ■■■ ",
							      "      ■■■■■        ■    ",
							      "    ■■■■■■■     ■     ",
							      "   ■■■■■■■■■■       ",
							      "  ■■■■■■■■■          "},
								 {"                              ",
					  		      "        ■■■■■            ",
							      "      ■■■■■■            ",
							      "      ■■■■Λ■■          ",
							      "      ■■■■■■■     ■   ",
							      "      ■■■■■■     ■■■ ",
							      "        ■■■■■■   ■■■ ",
							      "      ■■■■■        ■    ",
							      "    ■■■■■■■     ■     ",
							      "   ■■■■■■■■■■       ",
							      "  ■■■■■■■■■          "},
								 {"                              ",
					  		      "        ■■■■■            ",
							      "      ■■■■■■            ",
							      "      ■■■■Λ■■     ■   ",
							      "      ■■■■■■■     ■   ",
							      "      ■■■■■■     ■■■ ",
							      "        ■■■■■■   ■■■ ",
							      "      ■■■■■        ■    ",
							      "    ■■■■■■■     ■     ",
							      "   ■■■■■■■■■■       ",
								  "  ■■■■■■■■■          "}};

	char ThrowStone[16][11][43] = {{"                              ",	//짱돌, 원레 [9][11][31]이었으나 소스파일 확장자를 c에서 cpp로 바꾸니까 캐릭터 그리는 데 쓰인 2byte짜리 특수문자 크기가 3byte로 커져서 수정
					  		        "        ■■■■■            ",
							        "      ■■■■■■            ",
							        "      ■■■■Λ■■          ",
							        "      ■■■■■■■          ",
							        "      ■■■■■■            ",
							        "        ■■■■■■          ",
							        "      ■■■■■              ",
							        "    ■■■■■■■            ",
									"   ■■■■■■■■           ",
									"  ■■■■■■■■■          "},
								   {"                              ",
					  				"        ■■■■■            ",
							        "      ■■■■■■            ",
							        "      ■■■■Λ■■          ",
									"      ■■■■■■■          ",
									"      ■■■■■■            ",
									"        ■■■■■■          ",
									"      ■■■■■              ",
									"    ■■■■■■■            ",
									"   ■■■■■■■■■         ",
									"  ■■■■■■■■■          "},
								   {"                              ",
					  				"        ■■■■■            ",
									"      ■■■■■■            ",
									"      ■■■■Λ■■          ",
									"      ■■■■■■■          ",
									"      ■■■■■■            ",
									"        ■■■■■■          ",
									"      ■■■■■      ●      ",
									"    ■■■■■■■   ■       ",
									"   ■■■■■■■■■         ",
									"  ■■■■■■■■■          "},
								   {"                              ",
					  				"        ■■■■■            ",
									"      ■■■■■■            ",
									"      ■■■■Λ■■          ",
									"      ■■■■■■■          ",
									"      ■■■■■■            ",
									"        ■■■■■■   ●     ",
									"      ■■■■■      ■      ",
									"    ■■■■■■■   ■       ",
									"   ■■■■■■■■■         ",
									"  ■■■■■■■■■          "},
								   {"                              ",
					  				"        ■■■■■            ",
									"      ■■■■■■            ",
									"      ■■■■Λ■■          ",
									"      ■■■■■■■          ",
									"      ■■■■■■    ●      ",
									"        ■■■■■■  ■      ",
									"      ■■■■■      ■      ",
									"    ■■■■■■■   ■       ",
									"   ■■■■■■■■■         ",
									"  ■■■■■■■■■          "},
								   {"                              ",
					  				"        ■■■■■            ",
									"      ■■■■■■            ",
									"      ■■■■Λ■■          ",
									"      ■■■■■■■  ●      ",
									"      ■■■■■■    ■      ",
									"        ■■■■■■  ■      ",
									"      ■■■■■      ■      ",
									"    ■■■■■■■   ■       ",
									"   ■■■■■■■■■         ",
									"  ■■■■■■■■■          "},
								   {"                              ",
					  				"        ■■■■■            ",
									"      ■■■■■■            ",
									"      ■■■■Λ■■          ",
									"      ■■■■■■■  ■●    ",
									"      ■■■■■■     ■     ",
									"        ■■■■■■   ■     ",
									"      ■■■■■      ■      ",
									"    ■■■■■■■   ■       ",
									"   ■■■■■■■■■         ",
									"  ■■■■■■■■■          "},
								   {"                              ",
					  				"        ■■■■■            ",
									"      ■■■■■■            ",
									"      ■■■■Λ■■          ",
									"      ■■■■■■■   ■●   ",
									"      ■■■■■■     ■     ",
									"        ■■■■■■   ■     ",
									"      ■■■■■      ■      ",
									"    ■■■■■■■   ■       ",
									"   ■■■■■■■■■         ",
									"  ■■■■■■■■■          "},
								   {"                              ",
					  				"        ■■■■■            ",
									"      ■■■■■■            ",
									"      ■■■■Λ■■          ",
									"      ■■■■■■■    ■●  ",
									"      ■■■■■■      ■    ",
									"        ■■■■■■   ■     ",
									"      ■■■■■      ■      ",
									"    ■■■■■■■   ■       ",
									"   ■■■■■■■■■         ",
									"  ■■■■■■■■■          "},
								   {"                              ",
					  				"        ■■■■■            ",
									"      ■■■■■■            ",
									"      ■■■■Λ■■          ",
									"      ■■■■■■■     ■● ",
									"      ■■■■■■       ■   ",
									"        ■■■■■■    ■    ",
									"      ■■■■■      ■      ",
									"    ■■■■■■■   ■       ",
									"   ■■■■■■■■■         ",
									"  ■■■■■■■■■          "},
								   {"                              ",
					  				"        ■■■■■            ",
									"      ■■■■■■            ",
									"      ■■■■Λ■■          ",
									"      ■■■■■■■     ■● ",
									"      ■■■■■■      ■    ",
									"        ■■■■■■   ■     ",
									"      ■■■■■      ■      ",
									"    ■■■■■■■   ■       ",
									"   ■■■■■■■■■         ",
									"  ■■■■■■■■■          "},
								   {"                              ",
					  				"        ■■■■■            ",
									"      ■■■■■■            ",
									"      ■■■■Λ■■          ",
									"      ■■■■■■■      ■●",//29, 14
									"      ■■■■■■       ■   ",
									"        ■■■■■■    ■    ",
									"      ■■■■■       ■     ",
									"    ■■■■■■■   ■       ",
									"   ■■■■■■■■■         ",
									"  ■■■■■■■■■          "},
								   {"                              ",
					  				"        ■■■■■            ",
									"      ■■■■■■            ",
									"      ■■■■Λ■■          ",
									"      ■■■■■■■          ",
									"      ■■■■■■         ■ ",
									"        ■■■■■■     ■   ",
									"      ■■■■■       ■     ",
									"    ■■■■■■■   ■       ",
									"   ■■■■■■■■■         ",
									"  ■■■■■■■■■          "},
								   {"                              ",
					  				"        ■■■■■            ",
									"      ■■■■■■            ",
									"      ■■■■Λ■■          ",
									"      ■■■■■■■          ",
									"      ■■■■■■            ",
									"        ■■■■■■          ",
									"      ■■■■■         ■■ ",
									"    ■■■■■■■   ■■     ",
									"   ■■■■■■■■■         ",
									"  ■■■■■■■■■          "},
								   {"                              ",
					  				"        ■■■■■            ",
									"      ■■■■■■            ",
									"      ■■■■Λ■■          ",
									"      ■■■■■■■          ",
									"      ■■■■■■            ",
									"        ■■■■■■          ",
									"      ■■■■■              ",
									"    ■■■■■■■     ■■■ ",
									"   ■■■■■■■■■■       ",
									"  ■■■■■■■■■          "},
								   {"                              ",
					  				"        ■■■■■            ",
									"      ■■■■■■            ",
									"      ■■■■Λ■■          ",
									"      ■■■■■■■          ",
									"      ■■■■■■            ",
									"        ■■■■■■          ",
									"      ■■■■■              ",
									"    ■■■■■■■            ",
									"   ■■■■■■■■■■■■   ",
									"  ■■■■■■■■■       ■ "}};

	char FinalAttack[19][22] = {"   ■■■       ",	//원레 [19][17]이었으나 소스파일 확장자를 c에서 cpp로 바꾸니까 캐릭터 그리는 데 쓰인 2byte짜리 특수문자 크기가 3byte로 커져서 수정
								"  ■■■■      ",
							    " ■■■■■     ",
								"  ■■■■■    ",
								"   ■■■■■   ",
								"      ■■■■  ",
								"        ■■■  ",
								"         ■■■ ",
								"           ■■ ",
								"           ■■ ",
								"           ■■ ",
								"           ■■ ",
								"          ■■  ",
								"          ■■  ",
								"         ■■   ",
								"        ■■    ",
								"       ■■     ",
							    "    ■■        ",
								"■■            "};

	//char LargeFragment[6] = "|||||"; 미구현
	//char MediumFragment[6] = "||";   미구현
	//char SmallFragment[6] = "|";	   미구현

	int row;
	int frame;
	int addx = 0;
	int addy = 0;

	SetCursorType(NOCURSOR);

	if (x == 1 && y == 1)	//도발
	{
		Sleep(500);
		for (frame = 0; frame <= 8; frame++)
		{
			for (row = 0; row <= 10; row++)
			{
				gotoxy(3, 10 + row);
				printf("%s", Fuck_You_[frame][row]);
			}
			if (frame == 6)
			{
				Sleep(500);
			}
			else
			{
				Sleep(10);
			}
		}
		Sleep(1000);
	}
	else if (x == 0 && y == 0)	//필살기 24 <= x <= 39, 1 <= y <= 19
	{//22, 19
		Sleep(500);

		gotoxy(22, 19);
		printf("■");
		Sleep(15);

		for (addy = 19; addy >= 1; addy--)	//팔 올리기 애니메이션
		{
			if (addy == 3 || addy == 1)
			{
				gotoxy(10, addy);
				for (frame = 1; frame <= character[(int)characterName].HealthPoint; frame++)
				{
					printf(" ");
				}
				if (addy != 1)
				{
					gotoxy(10, addy - 2);
					for (frame = 1; frame <= character[(int)characterName].HealthPoint; frame++)
					{
						printf("|");
					}
				}
			}
			gotoxy(24, addy);
			printf("%s", FinalAttack[addy - 1]);

			if ((addy + 1) % 2 == 0)
			{
				Sleep(10);
			}

			//StateCharacterDisplay(index, character, 2);	//※Windows7에서 애니메이션 속도 저하를 일으켰음
		}

		for (frame = 1; frame <= 50; frame++)	//불끈 팔 진동 애니메이션
		{
			for (row = 0; row <= 17; row++)
			{
				if (frame % 2 == 0)
				{
					gotoxy(24, row + 1);
				}
				else
				{
					gotoxy(23, row + 1);
				}
				printf("%s", FinalAttack[row]);
			}
			Sleep(10);
		}

		for (addy = 1; addy <= 19; addy++)
		{
			gotoxy(24, addy);
			printf("                ");
			if (addy % 2 == 0)
			{
				Sleep(4);
			}
		}

		gotoxy(22, 19);
		printf("  ");
		Sleep(15);
		/* 파편효과(미구현)
		for(frame = 1, addx = 0; frame <= 20; frame++)
		{
			if(frame % 4 == 0)
				addx++;
			gotoxy(10 - addx, frame);
			printf("%s", LargeFragment);
			Sleep(15);
			gotoxy(10 - addx, frame);
			printf("     ");
			StateCharacterDisplay(index, character, 1);
		}
		*/
	}
	else	//짱돌
	{
		for (frame = 0; frame <= 15; frame++)
		{
			//3, 10 -> +2, -0 | 30 -> 32, 14 -> 14
			for (row = 0; row <= 10; row++)
			{
				gotoxy(3, 10 + row);
				printf("%s\n", ThrowStone[frame][row]);
			}
			if (frame == 6)
			{
				Sleep(400);
			}
			else if (frame < 12)
			{
				Sleep(5);
			}
			else
			{
				gotoxy(32 + addx, 14 - addy);
				printf("●");
				Sleep(20);	//5
				gotoxy(32 + addx, 14 - addy++);
				printf("  ");
				addx += (x - 32) / (14 - y);
			}
		}

		switch (characterName)
		{
		case eCharacterName::GrassHopper:	//메뚜기 아야
			CharacterExpression(characterName, character, eCharacterExpression::GrassHopperDamaged);
			break;
		case eCharacterName::Billy:	//고자라니
			CharacterExpression(characterName, character, eCharacterExpression::BillyGozarani);
			break;
		case eCharacterName::CamelCriket:	//곱등이 아야
			CharacterExpression(characterName, character, eCharacterExpression::CamelCriketDead);
			break;
		default:
			break;
		}
		
		for (; addy <= 14 - y; addy++)
		{	//빌리 index == 8, 이미지 좌측상단 48, 4 이미지사이즈 30x11
			printf("  ");
			if (characterName == eCharacterName::Billy)
			{
				CharacterDisplay(characterName, character);
			}
			if (addy == 14 - y)
			{
				gotoxy(x, 14 - addy);
			}
			else
			{
				gotoxy(32 + addx, 14 - addy);
			}
			printf("●");
			Sleep(5);	//5
			if (addy == 14 - y)
			{
				gotoxy(x, 14 - addy);
			}
			else
			{
				gotoxy(32 + addx, 14 - addy);
			}
			
			addx += (x - 32) / (14 - y);
		}

		gotoxy(x, y);//몬스터 이미지 맨 아래 y좌표 13 ↑×3 ↓×3 ▼
		for (addy = 1; addy <= 2; addy++)
		{
			printf("  ");
			if (characterName == eCharacterName::Billy)
			{
				CharacterDisplay(characterName, character);
			}
			gotoxy(--x, y - addy);
			printf("●");
			Sleep(30);	//15
			gotoxy(x, y - addy);
			
		}
		for (addy = 0; addy <= 1; addy++)
		{
			gotoxy(--x, y - 2);
			printf("●");
			Sleep(60);	//30
			gotoxy(x, y - 2);
			printf("  ");
			if (characterName == eCharacterName::Billy)
			{
				CharacterDisplay(characterName, character);
			}
		}
		for (addy = 2; addy >= 0; addy--)
		{
			printf("  ");
			if (characterName == eCharacterName::Billy)
			{
				CharacterDisplay(characterName, character);
			}
			gotoxy(--x, y - addy);
			printf("●");
			Sleep(40);	//20
			gotoxy(x, y - addy);
			
		}
		for (; y - addy <= 13; addy--)
		{
			printf("  ");
			if (y - addy <= 10)
			{
				gotoxy(--x, y - addy);
			}
			else
			{
				gotoxy(x, y - addy);
			}
			printf("●");
			Sleep(5);	//5
			gotoxy(x, y - addy);
		}
		Sleep(200);
		for (addy = 0; addy <= 9; addy++)
		{
			gotoxy(x, 13);
			printf("●");
			Sleep(30);
			gotoxy(x, 13);
			printf("  ");
			Sleep(30);
		}
	}

	SetCursorType(SHOWCURSOR);
}