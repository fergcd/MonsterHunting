#include"Header.h"

void InputName(sCharacter* character)	//�÷��̾��� �̸��� �Է¹޽��ϴ�. �̸� �Է� �� ���͸� ġ�� �˴ϴ�.
{
	unsigned int nameLength = 0;	//�÷��̾� �̸� ����

	gotoxy(20, 8);
	printf("����� �̸��� �Է��ϰ� ���͸� ��������.\n\n");
	textcolor(12);
	gotoxy(1, 15);
	printf("        ���ѱ��̸��� �Է��ߴٸ� ����ġ�� ���� [��/��] Ű�� ��������.\n");
	printf("        ���̸��� 10byte �̳��� �Է��ϼ���.");
	textcolor(7);
	gotoxy(20, 10);
	printf("          �� ");

	do
	{
		scanf("%s", character[0].name);

		if(nameLength = strlen(character[0].name) > 10)	//�̸� ���̸� 10byte�� ����
		{
			textcolor(12);
			gotoxy(33, 11);
			printf("�̸��� �ʹ� ����!");
			textcolor(7);
			gotoxy(33, 10);
			for(nameLength = 0;nameLength < strlen(character[0].name); nameLength++)
			{
				printf(" ");
			}
			gotoxy(33, 10);
		}
	}while(nameLength = strlen(character[0].name) > 10);

	fflush(stdin);
	
	gotoxy(33, 10);
	Blink(character[0].name, 33, 10, 14);

	system("cls");
}