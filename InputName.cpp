#include"Header.h"

void InputName(sCharacter* character)	//�÷��̾��� �̸��� �Է¹޽��ϴ�. �̸� �Է� �� ���͸� ġ�� �˴ϴ�.
{
	unsigned int nameLength = 0;	//�÷��̾� �̸� ����
	int result = 1;

	do
	{
		gotoxy(20, 8);
		printf("����� �̸��� �Է��ϰ� ���͸� ��������.\n\n");
		textcolor(12);
		gotoxy(1, 15);
		printf("        ���ѱ��̸��� �Է��ߴٸ� ����ġ�� ���� [��/��] Ű�� ��������.\n");
		printf("        ���̸��� 10byte �̳��� �Է��ϼ���.");
		textcolor(7);
		gotoxy(20, 10);
		printf("          �� ");

		if (nameLength > 10 || 0 == result)	//�̸� ���̸� 10byte�� ����
		{
			textcolor(12);
			gotoxy(33, 11);
			printf("�̸��� �ʹ� ����!");
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