#include"Header.h"

void Use_Item_or_Skill(int x, int y, eCharacterName characterName, sCharacter* character)	//������ �Ǵ� ��� ��� �ִϸ��̼� �Լ�
{
	char Fuck_You_[9][11][41] = {{"                              ",	//����, ���� [9][11][31]�̾����� �ҽ����� Ȯ���ڸ� c���� cpp�� �ٲٴϱ� ĳ���� �׸��� �� ���� 2byte¥�� Ư������ ũ�Ⱑ 3byte�� Ŀ���� ����
					  		      "        ������            ",
							      "      �������            ",
							      "      �����ˡ��          ",
							      "      ��������          ",
							      "      �������            ",
							      "        �������          ",
							      "      ������              ",
							      "    ��������            ",
							      "   ���������           ",
							      "  ����������          "},
	                             {"                              ",
					  		      "        ������            ",
							      "      �������            ",
							      "      �����ˡ��          ",
							      "      ��������          ",
							      "      �������            ",
							      "        �������          ",
							      "      ������              ",
							      "    ��������            ",
							      "   ����������         ",
							      "  ����������          "},
								 {"                              ",
					  		      "        ������            ",
							      "      �������            ",
							      "      �����ˡ��          ",
							      "      ��������          ",
							      "      �������            ",
							      "        �������          ",
							      "      ������              ",
							      "    ��������            ",
							      "   �����������       ",
							      "  ����������          "},
								 {"                              ",
					  		      "        ������            ",
							      "      �������            ",
							      "      �����ˡ��          ",
							      "      ��������          ",
							      "      �������            ",
							      "        �������          ",
							      "      ������              ",
							      "    ��������     ��     ",
							      "   �����������       ",
							      "  ����������          "},
								 {"                              ",
					  		      "        ������            ",
							      "      �������            ",
							      "      �����ˡ��          ",
							      "      ��������          ",
							      "      �������            ",
							      "        �������          ",
							      "      ������        ��    ",
							      "    ��������     ��     ",
							      "   �����������       ",
							      "  ����������          "},
								 {"                              ",
					  		      "        ������            ",
							      "      �������            ",
							      "      �����ˡ��          ",
							      "      ��������          ",
							      "      �������            ",
							      "        �������     ��   ",
							      "      ������        ��    ",
							      "    ��������     ��     ",
							      "   �����������       ",
							      "  ����������          "},
								 {"                              ",
					  		      "        ������            ",
							      "      �������            ",
							      "      �����ˡ��          ",
							      "      ��������          ",
							      "      �������     ���� ",
							      "        �������   ���� ",
							      "      ������        ��    ",
							      "    ��������     ��     ",
							      "   �����������       ",
							      "  ����������          "},
								 {"                              ",
					  		      "        ������            ",
							      "      �������            ",
							      "      �����ˡ��          ",
							      "      ��������     ��   ",
							      "      �������     ���� ",
							      "        �������   ���� ",
							      "      ������        ��    ",
							      "    ��������     ��     ",
							      "   �����������       ",
							      "  ����������          "},
								 {"                              ",
					  		      "        ������            ",
							      "      �������            ",
							      "      �����ˡ��     ��   ",
							      "      ��������     ��   ",
							      "      �������     ���� ",
							      "        �������   ���� ",
							      "      ������        ��    ",
							      "    ��������     ��     ",
							      "   �����������       ",
								  "  ����������          "}};

	char ThrowStone[16][11][43] = {{"                              ",	//¯��, ���� [9][11][31]�̾����� �ҽ����� Ȯ���ڸ� c���� cpp�� �ٲٴϱ� ĳ���� �׸��� �� ���� 2byte¥�� Ư������ ũ�Ⱑ 3byte�� Ŀ���� ����
					  		        "        ������            ",
							        "      �������            ",
							        "      �����ˡ��          ",
							        "      ��������          ",
							        "      �������            ",
							        "        �������          ",
							        "      ������              ",
							        "    ��������            ",
									"   ���������           ",
									"  ����������          "},
								   {"                              ",
					  				"        ������            ",
							        "      �������            ",
							        "      �����ˡ��          ",
									"      ��������          ",
									"      �������            ",
									"        �������          ",
									"      ������              ",
									"    ��������            ",
									"   ����������         ",
									"  ����������          "},
								   {"                              ",
					  				"        ������            ",
									"      �������            ",
									"      �����ˡ��          ",
									"      ��������          ",
									"      �������            ",
									"        �������          ",
									"      ������      ��      ",
									"    ��������   ��       ",
									"   ����������         ",
									"  ����������          "},
								   {"                              ",
					  				"        ������            ",
									"      �������            ",
									"      �����ˡ��          ",
									"      ��������          ",
									"      �������            ",
									"        �������   ��     ",
									"      ������      ��      ",
									"    ��������   ��       ",
									"   ����������         ",
									"  ����������          "},
								   {"                              ",
					  				"        ������            ",
									"      �������            ",
									"      �����ˡ��          ",
									"      ��������          ",
									"      �������    ��      ",
									"        �������  ��      ",
									"      ������      ��      ",
									"    ��������   ��       ",
									"   ����������         ",
									"  ����������          "},
								   {"                              ",
					  				"        ������            ",
									"      �������            ",
									"      �����ˡ��          ",
									"      ��������  ��      ",
									"      �������    ��      ",
									"        �������  ��      ",
									"      ������      ��      ",
									"    ��������   ��       ",
									"   ����������         ",
									"  ����������          "},
								   {"                              ",
					  				"        ������            ",
									"      �������            ",
									"      �����ˡ��          ",
									"      ��������  ���    ",
									"      �������     ��     ",
									"        �������   ��     ",
									"      ������      ��      ",
									"    ��������   ��       ",
									"   ����������         ",
									"  ����������          "},
								   {"                              ",
					  				"        ������            ",
									"      �������            ",
									"      �����ˡ��          ",
									"      ��������   ���   ",
									"      �������     ��     ",
									"        �������   ��     ",
									"      ������      ��      ",
									"    ��������   ��       ",
									"   ����������         ",
									"  ����������          "},
								   {"                              ",
					  				"        ������            ",
									"      �������            ",
									"      �����ˡ��          ",
									"      ��������    ���  ",
									"      �������      ��    ",
									"        �������   ��     ",
									"      ������      ��      ",
									"    ��������   ��       ",
									"   ����������         ",
									"  ����������          "},
								   {"                              ",
					  				"        ������            ",
									"      �������            ",
									"      �����ˡ��          ",
									"      ��������     ��� ",
									"      �������       ��   ",
									"        �������    ��    ",
									"      ������      ��      ",
									"    ��������   ��       ",
									"   ����������         ",
									"  ����������          "},
								   {"                              ",
					  				"        ������            ",
									"      �������            ",
									"      �����ˡ��          ",
									"      ��������     ��� ",
									"      �������      ��    ",
									"        �������   ��     ",
									"      ������      ��      ",
									"    ��������   ��       ",
									"   ����������         ",
									"  ����������          "},
								   {"                              ",
					  				"        ������            ",
									"      �������            ",
									"      �����ˡ��          ",
									"      ��������      ���",//29, 14
									"      �������       ��   ",
									"        �������    ��    ",
									"      ������       ��     ",
									"    ��������   ��       ",
									"   ����������         ",
									"  ����������          "},
								   {"                              ",
					  				"        ������            ",
									"      �������            ",
									"      �����ˡ��          ",
									"      ��������          ",
									"      �������         �� ",
									"        �������     ��   ",
									"      ������       ��     ",
									"    ��������   ��       ",
									"   ����������         ",
									"  ����������          "},
								   {"                              ",
					  				"        ������            ",
									"      �������            ",
									"      �����ˡ��          ",
									"      ��������          ",
									"      �������            ",
									"        �������          ",
									"      ������         ��� ",
									"    ��������   ���     ",
									"   ����������         ",
									"  ����������          "},
								   {"                              ",
					  				"        ������            ",
									"      �������            ",
									"      �����ˡ��          ",
									"      ��������          ",
									"      �������            ",
									"        �������          ",
									"      ������              ",
									"    ��������     ���� ",
									"   �����������       ",
									"  ����������          "},
								   {"                              ",
					  				"        ������            ",
									"      �������            ",
									"      �����ˡ��          ",
									"      ��������          ",
									"      �������            ",
									"        �������          ",
									"      ������              ",
									"    ��������            ",
									"   �������������   ",
									"  ����������       �� "}};

	char FinalAttack[19][22] = {"   ����       ",	//���� [19][17]�̾����� �ҽ����� Ȯ���ڸ� c���� cpp�� �ٲٴϱ� ĳ���� �׸��� �� ���� 2byte¥�� Ư������ ũ�Ⱑ 3byte�� Ŀ���� ����
								"  �����      ",
							    " ������     ",
								"  ������    ",
								"   ������   ",
								"      �����  ",
								"        ����  ",
								"         ���� ",
								"           ��� ",
								"           ��� ",
								"           ��� ",
								"           ��� ",
								"          ���  ",
								"          ���  ",
								"         ���   ",
								"        ���    ",
								"       ���     ",
							    "    ���        ",
								"���            "};

	//char LargeFragment[6] = "|||||"; �̱���
	//char MediumFragment[6] = "||";   �̱���
	//char SmallFragment[6] = "|";	   �̱���

	int row;
	int frame;
	int addx = 0;
	int addy = 0;

	SetCursorType(NOCURSOR);

	if (x == 1 && y == 1)	//����
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
	else if (x == 0 && y == 0)	//�ʻ�� 24 <= x <= 39, 1 <= y <= 19
	{//22, 19
		Sleep(500);

		gotoxy(22, 19);
		printf("��");
		Sleep(15);

		for (addy = 19; addy >= 1; addy--)	//�� �ø��� �ִϸ��̼�
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

			//StateCharacterDisplay(index, character, 2);	//��Windows7���� �ִϸ��̼� �ӵ� ���ϸ� ��������
		}

		for (frame = 1; frame <= 50; frame++)	//�Ҳ� �� ���� �ִϸ��̼�
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
		/* ����ȿ��(�̱���)
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
	else	//¯��
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
				printf("��");
				Sleep(20);	//5
				gotoxy(32 + addx, 14 - addy++);
				printf("  ");
				addx += (x - 32) / (14 - y);
			}
		}

		switch (characterName)
		{
		case eCharacterName::GrassHopper:	//�޶ѱ� �ƾ�
			CharacterExpression(characterName, character, eCharacterExpression::GrassHopperDamaged);
			break;
		case eCharacterName::Billy:	//���ڶ��
			CharacterExpression(characterName, character, eCharacterExpression::BillyGozarani);
			break;
		case eCharacterName::CamelCriket:	//������ �ƾ�
			CharacterExpression(characterName, character, eCharacterExpression::CamelCriketDead);
			break;
		default:
			break;
		}
		
		for (; addy <= 14 - y; addy++)
		{	//���� index == 8, �̹��� ������� 48, 4 �̹��������� 30x11
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
			printf("��");
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

		gotoxy(x, y);//���� �̹��� �� �Ʒ� y��ǥ 13 �衿3 �顿3 ��
		for (addy = 1; addy <= 2; addy++)
		{
			printf("  ");
			if (characterName == eCharacterName::Billy)
			{
				CharacterDisplay(characterName, character);
			}
			gotoxy(--x, y - addy);
			printf("��");
			Sleep(30);	//15
			gotoxy(x, y - addy);
			
		}
		for (addy = 0; addy <= 1; addy++)
		{
			gotoxy(--x, y - 2);
			printf("��");
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
			printf("��");
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
			printf("��");
			Sleep(5);	//5
			gotoxy(x, y - addy);
		}
		Sleep(200);
		for (addy = 0; addy <= 9; addy++)
		{
			gotoxy(x, 13);
			printf("��");
			Sleep(30);
			gotoxy(x, 13);
			printf("  ");
			Sleep(30);
		}
	}

	SetCursorType(SHOWCURSOR);
}