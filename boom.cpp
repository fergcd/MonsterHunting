#include"Header.h"

void boom()	//��
{
	char body[5][4][40] = {{"        ������            ",
							"      ��������          ",
							"     ���������         ",
							"    ����������        "},
						   {"        ������            ",
							"     ���� �� ����         ",
							"    ���� ��� ����        ",
							"   ����� �� �����       "},
						   {"        ������            ",
							"    ��� �� �� �� ���        ",
							"   ��� �� ��� �� ���       ",
							"  ���� �� �� �� ����      "},
						   {"        ������            ",
							"   �� �� �� �� �� �� ��       ",
							"  �� �� �� ��� �� �� ��      ",
							" ��� �� �� �� �� �� ���     "},
						   {"       �� ���� ��           ",
							"   �� �� �� �� �� �� ��       ",
							"  �� �� �� ��� �� �� ��      ",
							"�� �� �� �� �� �� �� �� ��    "}};

	int row;
	int frame;

	SetCursorType(NOCURSOR);

	for (frame = 0; frame <= 8; frame++)
	{
		for (row = 0; row <= 3; row++)
		{
			gotoxy(1, 17 + row);
			if (frame >= 4)
			{
				printf("%s", body[8 - frame][row]);
			}
			else
			{
				printf("%s", body[frame][row]);
			}
		}
		if (frame == 4)
		{
			Sleep(100);
		}
		else
		{
			Sleep(15);
		}
	}

	Sleep(500);

	for (frame = 1; frame <= 30; frame++)
	{
		if (frame % 2 == 0)
		{
			textcolor(BLACK);
		}
		else
		{
			textcolor(LIGHTRED);
		}
		gotoxy(33, 12);
		printf("��");
		gotoxy(27, 13);
		printf("�� ��  ��");
		gotoxy(25, 14);
		printf("�Ƣ� ��   ��");
		gotoxy(21, 15);
		printf("�ƢƢƢƢ� �� ��");
		gotoxy(25, 16);
		printf("�Ƣ�  `   ��");
		gotoxy(27, 17);
		printf("�� ��  `");
		gotoxy(33, 18);
		printf("`");
		Sleep(20);
	}

	textcolor(LIGHTGRAY);

	SetCursorType(SHOWCURSOR);
}

/*          ��
	  �� ��  ��
	�Ƣ� ��   ��
�ƢƢƢƢ� �� ��
	�Ƣ�  `   ��
	  �� ��  `
		 `
			`
*/