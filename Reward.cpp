#include"Header.h"

void Reward(eCharacterName characterName, sCharacter* character)	//�� ���͸� ����Ʈ���� �� ���� �̺�Ʈ �߻�
{
	int previousHP = character[0].HealthPoint;
	int previousAP = character[0].AttackPoint;

	char nothing[2][22] = {"  ",
						   "  "};
	
	int dummy = _getch();
	CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerNormal);
	eraseMSG();
	
	switch (characterName)	//����Ʈ�� ���Ϳ� ���� �÷��̾��� ���°� �޸� ��ȭ�մϴ�.
	{
	case eCharacterName::Stone:
		printf("%s��(��) ¯���� ȹ���߽��ϴ�.", character[0].name);
		ItemAcquire(1, character);
		break;
	case eCharacterName::Flower:
		printf("%s��(��) %s�� ȹ���߽��ϴ�.", character[0].name, character[(int)characterName].name);
		ItemAcquire(2, character);
		break;
	case eCharacterName::Tree:
		printf("%s��(��) %s���Ÿ� ȹ���߽��ϴ�.", character[0].name, character[(int)characterName].name);
		ItemAcquire(3, character);
		getch_eraseMSG();
		printf("%s��(��) %s���Ÿ� �Ծ����ϴ�.", character[0].name, character[(int)characterName].name);
		ItemAcquire(13, character);
		eraseMSG();
		printf("!?");
		CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerWhatThe);
		getch_eraseMSG();
		printf("%s��(��) ��Ż�� ���� ü���� 3 ���������ϴ�.", character[0].name);
		CharacterBlink(eCharacterName::Player, character, RED);
		character[0].HealthPoint -= 3;
		Adjust_NegativeHealthPoint_To_Zero(0, character);
		break;
	case eCharacterName::Ant:
		printf("%s��(��) %s�� �Ծ����ϴ�.", character[0].name, character[(int)characterName].name);
		EatItem(4, character, nothing);
		getch_eraseMSG();
		printf("%s�� ü���� 1 ����߽��ϴ�.", character[0].name);
		CharacterBlink(eCharacterName::Player, character, LIGHTGREEN);
		character[0].HealthPoint += 1;
		break;
	case eCharacterName::GrassHopper:
		printf("%s��(��) %s�� �Ծ����ϴ�.", character[0].name, character[(int)characterName].name);
		EatItem(4, character, nothing);
		getch_eraseMSG();
		printf("%s�� ü���� 5 ����߽��ϴ�.", character[0].name);
		CharacterBlink(eCharacterName::Player, character, LIGHTGREEN);
		character[0].HealthPoint += 5;
		StateDisplay(0, character, previousHP, previousAP, 40, 15);
		previousHP = character[0].HealthPoint;
		getch_eraseMSG();
		printf("%s�� �Ǹ��� �ܹ��� ���޿��̾��� ������", character[(int)characterName].name);
		gotoxy(4, 23);
		printf("%s�� ���ݷ��� 5 ����߽��ϴ�.", character[0].name);
		CharacterBlink(eCharacterName::Player, character, LIGHTBLUE);
		character[0].AttackPoint += 5;
		break;
	case eCharacterName::InfinitesimalCalculusTextBook:
		printf("%s��(��) %s�� �Ծ����ϴ�.", character[0].name, character[(int)characterName].name);
		EatItem(4, character, nothing);
		getch_eraseMSG();
		printf("������ %s�� ���м������� ��ȭ�� �������ϴ�.", character[0].name);
		CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerDisappointed);
		break;
	case eCharacterName::Grenade:
		printf("%s��(��) %s�� ȹ���߽��ϴ�.", character[0].name, character[(int)characterName].name);
		ItemAcquire(7, character);
		break;
	case eCharacterName::Billy:
		printf("%s��(��) %s�� �Ծ����ϴ�.", character[0].name, character[(int)characterName].name);
		EatItem(4, character, nothing);
		getch_eraseMSG();
		printf("%s��(��) '����' ����� �����߽��ϴ�.", character[0].name);
		CharacterBlink(eCharacterName::Player, character, YELLOW);
		getch_eraseMSG();
		printf("%s�� ü���� 5 ����߽��ϴ�.", character[0].name);
		CharacterBlink(eCharacterName::Player, character, LIGHTGREEN);
		character[0].HealthPoint += 5;
		StateDisplay(0, character, previousHP, previousAP, 40, 15);
		previousHP = character[0].HealthPoint;
		getch_eraseMSG();
		printf("Oh My Shoulder ~ ��");
		getch_eraseMSG();
		printf("%s�� ���ݷ��� 10 ����߽��ϴ�.", character[0].name);
		CharacterBlink(eCharacterName::Player, character, LIGHTBLUE);
		character[0].AttackPoint += 10;
		break;
	case eCharacterName::CamelCriket:
		printf("%s��(��) %s�� �Ծ����ϴ�.", character[0].name, character[(int)characterName].name);
		EatItem(4, character, nothing);
		getch_eraseMSG();
		printf("%s�� ü���� 15 ����߽��ϴ�.", character[0].name);
		CharacterBlink(eCharacterName::Player, character, LIGHTGREEN);
		character[0].HealthPoint += 15;
		StateDisplay(0, character, previousHP, previousAP, 40, 15);
		previousHP = character[0].HealthPoint;
		getch_eraseMSG();
		printf("%s�� �ſ� �Ǹ��� �ܹ��� ���޿��̾��� ������", character[(int)characterName].name);
		gotoxy(4, 23);
		printf("%s�� ���ݷ��� 5 ����߽��ϴ�.", character[0].name);
		CharacterBlink(eCharacterName::Player, character, LIGHTBLUE);
		character[0].AttackPoint += 5;
		break;
	case eCharacterName::Gandhi:
		printf("%s��(��) �������� ȹ���߽��ϴ�.", character[0].name);
		ItemAcquire(10, character);
		break;
	default:
		break;
	}
	StateDisplay(0, character, previousHP, previousAP, 40, 15);
	getch_eraseMSG();
}