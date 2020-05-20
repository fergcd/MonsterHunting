#include"Header.h"

void Reward(int index, sCharacter* character)	//�� ���͸� ����Ʈ���� �� ���� �̺�Ʈ �߻�
{	//WhatBlink - 4:��ο��(HP����)  10:�ʷ�(HP����)  9:�Ķ�(AP����)
	int previousHP = character[0].HealthPoint, previousAP = character[0].AttackPoint;

	char nothing[2][22] = {"  ",
						   "  "};
	
	int dummy = _getch();
	CharacterExpression(0, character, 0);
	eraseMSG();

	character_name = (CharacterName)index;	//character_name�� �ڷ����� CharacterName, �� �������ε� �ҽ����� Ȯ���ڸ� c���� cpp�� �ٲٴϱ� index�� �ڷ����� int�� �������� ���� �ٸ� �ڷ������� �νĵǼ� ĳ��Ʈ ������ ���
	switch(character_name)	//����Ʈ�� ���Ϳ� ���� �÷��̾��� ���°� �޸� ��ȭ�մϴ�.
	{
	case Stone:
		printf("%s��(��) ¯���� ȹ���߽��ϴ�.", character[0].name);
		ItemAcquire(Stone, character);
		break;
	case Flower:
		printf("%s��(��) %s�� ȹ���߽��ϴ�.", character[0].name, character[index].name);
		ItemAcquire(Flower, character);
		break;
	case Tree:
		printf("%s��(��) %s���Ÿ� ȹ���߽��ϴ�.", character[0].name, character[index].name);
		ItemAcquire(Tree, character);
		getch_eraseMSG();
		printf("%s��(��) %s���Ÿ� �Ծ����ϴ�.", character[0].name, character[index].name);
		ItemAcquire(13, character);
		eraseMSG();
		printf("!?");
		CharacterExpression(0, character, 14);
		getch_eraseMSG();
		printf("%s��(��) ��Ż�� ���� ü���� 3 ���������ϴ�.", character[0].name);
		CharacterBlink(0, character, 4);
		character[0].HealthPoint -= 3;
		Adjust_NegativeHealthPoint_To_Zero(0, character);
		break;
	case Ant:
		printf("%s��(��) %s�� �Ծ����ϴ�.", character[0].name, character[index].name);
		EatItem(4, character, nothing);
		getch_eraseMSG();
		printf("%s�� ü���� 1 ����߽��ϴ�.", character[0].name);
		CharacterBlink(0, character, 10);
		character[0].HealthPoint += 1;
		break;
	case GrassHopper:
		printf("%s��(��) %s�� �Ծ����ϴ�.", character[0].name, character[index].name);
		EatItem(4, character, nothing);
		getch_eraseMSG();
		printf("%s�� ü���� 5 ����߽��ϴ�.", character[0].name);
		CharacterBlink(0, character, 10);
		character[0].HealthPoint += 5;
		StateDisplay(0, character, previousHP, previousAP, 40, 15);
		previousHP = character[0].HealthPoint;
		getch_eraseMSG();
		printf("%s�� �Ǹ��� �ܹ��� ���޿��̾��� ������", character[index].name);
		gotoxy(4, 23);
		printf("%s�� ���ݷ��� 5 ����߽��ϴ�.", character[0].name);
		CharacterBlink(0, character, 9);
		character[0].AttackPoint += 5;
		break;
	case Infinitesimal_Calculus_TextBook:
		printf("%s��(��) %s�� �Ծ����ϴ�.", character[0].name, character[index].name);
		EatItem(4, character, nothing);
		getch_eraseMSG();
		printf("������ %s�� ���м������� ��ȭ�� �������ϴ�.", character[0].name);
		CharacterExpression(0, character, 1);
		break;
	case Grenade:
		printf("%s��(��) %s�� ȹ���߽��ϴ�.", character[0].name, character[index].name);
		ItemAcquire(Grenade, character);
		break;
	case Billy:
		printf("%s��(��) %s�� �Ծ����ϴ�.", character[0].name, character[index].name);
		EatItem(4, character, nothing);
		getch_eraseMSG();
		printf("%s��(��) '����' ����� �����߽��ϴ�.", character[0].name);
		CharacterBlink(0, character, 14);
		getch_eraseMSG();
		printf("%s�� ü���� 5 ����߽��ϴ�.", character[0].name);
		CharacterBlink(0, character, 10);
		character[0].HealthPoint += 5;
		StateDisplay(0, character, previousHP, previousAP, 40, 15);
		previousHP = character[0].HealthPoint;
		getch_eraseMSG();
		printf("Oh My Shoulder ~ ��");
		getch_eraseMSG();
		printf("%s�� ���ݷ��� 10 ����߽��ϴ�.", character[0].name);
		CharacterBlink(0, character, 9);
		character[0].AttackPoint += 10;
		break;
	case Camel_Criket:
		printf("%s��(��) %s�� �Ծ����ϴ�.", character[0].name, character[index].name);
		EatItem(4, character, nothing);
		getch_eraseMSG();
		printf("%s�� ü���� 15 ����߽��ϴ�.", character[0].name);
		CharacterBlink(0, character, 10);
		character[0].HealthPoint += 15;
		StateDisplay(0, character, previousHP, previousAP, 40, 15);
		previousHP = character[0].HealthPoint;
		getch_eraseMSG();
		printf("%s�� �ſ� �Ǹ��� �ܹ��� ���޿��̾��� ������", character[index].name);
		gotoxy(4, 23);
		printf("%s�� ���ݷ��� 5 ����߽��ϴ�.", character[0].name);
		CharacterBlink(0, character, 9);
		character[0].AttackPoint += 5;
		break;
	case Gandhi:
		printf("%s��(��) �������� ȹ���߽��ϴ�.", character[0].name);
		ItemAcquire(Gandhi, character);
		break;
	}
	StateDisplay(0, character, previousHP, previousAP, 40, 15);
	getch_eraseMSG();
}