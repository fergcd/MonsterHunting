#include"Header.h"

void Reward(eCharacterName characterName, sCharacter* character)	//각 몬스터를 쓰러트렸을 때 보상 이벤트 발생
{
	int previousHP = character[0].HealthPoint;
	int previousAP = character[0].AttackPoint;

	char nothing[2][22] = {"  ",
						   "  "};
	
	int dummy = _getch();
	CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerNormal);
	eraseMSG();
	
	switch (characterName)	//쓰러트린 몬스터에 따라 플레이어의 상태가 달리 변화합니다.
	{
	case eCharacterName::Stone:
		printf("%s이(가) 짱돌을 획득했습니다.", character[0].name);
		ItemAcquire(1, character);
		break;
	case eCharacterName::Flower:
		printf("%s이(가) %s을 획득했습니다.", character[0].name, character[(int)characterName].name);
		ItemAcquire(2, character);
		break;
	case eCharacterName::Tree:
		printf("%s이(가) %s열매를 획득했습니다.", character[0].name, character[(int)characterName].name);
		ItemAcquire(3, character);
		getch_eraseMSG();
		printf("%s이(가) %s열매를 먹었습니다.", character[0].name, character[(int)characterName].name);
		ItemAcquire(13, character);
		eraseMSG();
		printf("!?");
		CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerWhatThe);
		getch_eraseMSG();
		printf("%s이(가) 배탈이 나서 체력이 3 떨어졌습니다.", character[0].name);
		CharacterBlink(eCharacterName::Player, character, RED);
		character[0].HealthPoint -= 3;
		Adjust_NegativeHealthPoint_To_Zero(0, character);
		break;
	case eCharacterName::Ant:
		printf("%s이(가) %s를 먹었습니다.", character[0].name, character[(int)characterName].name);
		EatItem(4, character, nothing);
		getch_eraseMSG();
		printf("%s의 체력이 1 상승했습니다.", character[0].name);
		CharacterBlink(eCharacterName::Player, character, LIGHTGREEN);
		character[0].HealthPoint += 1;
		break;
	case eCharacterName::GrassHopper:
		printf("%s이(가) %s를 먹었습니다.", character[0].name, character[(int)characterName].name);
		EatItem(4, character, nothing);
		getch_eraseMSG();
		printf("%s의 체력이 5 상승했습니다.", character[0].name);
		CharacterBlink(eCharacterName::Player, character, LIGHTGREEN);
		character[0].HealthPoint += 5;
		StateDisplay(0, character, previousHP, previousAP, 40, 15);
		previousHP = character[0].HealthPoint;
		getch_eraseMSG();
		printf("%s는 훌륭한 단백질 공급원이었기 때문에", character[(int)characterName].name);
		gotoxy(4, 23);
		printf("%s의 공격력이 5 상승했습니다.", character[0].name);
		CharacterBlink(eCharacterName::Player, character, LIGHTBLUE);
		character[0].AttackPoint += 5;
		break;
	case eCharacterName::InfinitesimalCalculusTextBook:
		printf("%s이(가) %s을 먹었습니다.", character[0].name, character[(int)characterName].name);
		EatItem(4, character, nothing);
		getch_eraseMSG();
		printf("하지만 %s의 수학성적에는 변화가 없었습니다.", character[0].name);
		CharacterExpression(eCharacterName::Player, character, eCharacterExpression::PlayerDisappointed);
		break;
	case eCharacterName::Grenade:
		printf("%s이(가) %s을 획득했습니다.", character[0].name, character[(int)characterName].name);
		ItemAcquire(7, character);
		break;
	case eCharacterName::Billy:
		printf("%s이(가) %s를 먹었습니다.", character[0].name, character[(int)characterName].name);
		EatItem(4, character, nothing);
		getch_eraseMSG();
		printf("%s이(가) '도발' 기술을 습득했습니다.", character[0].name);
		CharacterBlink(eCharacterName::Player, character, YELLOW);
		getch_eraseMSG();
		printf("%s의 체력이 5 상승했습니다.", character[0].name);
		CharacterBlink(eCharacterName::Player, character, LIGHTGREEN);
		character[0].HealthPoint += 5;
		StateDisplay(0, character, previousHP, previousAP, 40, 15);
		previousHP = character[0].HealthPoint;
		getch_eraseMSG();
		printf("Oh My Shoulder ~ ♥");
		getch_eraseMSG();
		printf("%s의 공격력이 10 상승했습니다.", character[0].name);
		CharacterBlink(eCharacterName::Player, character, LIGHTBLUE);
		character[0].AttackPoint += 10;
		break;
	case eCharacterName::CamelCriket:
		printf("%s이(가) %s를 먹었습니다.", character[0].name, character[(int)characterName].name);
		EatItem(4, character, nothing);
		getch_eraseMSG();
		printf("%s의 체력이 15 상승했습니다.", character[0].name);
		CharacterBlink(eCharacterName::Player, character, LIGHTGREEN);
		character[0].HealthPoint += 15;
		StateDisplay(0, character, previousHP, previousAP, 40, 15);
		previousHP = character[0].HealthPoint;
		getch_eraseMSG();
		printf("%s는 매우 훌륭한 단백질 공급원이었기 때문에", character[(int)characterName].name);
		gotoxy(4, 23);
		printf("%s의 공격력이 5 상승했습니다.", character[0].name);
		CharacterBlink(eCharacterName::Player, character, LIGHTBLUE);
		character[0].AttackPoint += 5;
		break;
	case eCharacterName::Gandhi:
		printf("%s이(가) 옥수수를 획득했습니다.", character[0].name);
		ItemAcquire(10, character);
		break;
	default:
		break;
	}
	StateDisplay(0, character, previousHP, previousAP, 40, 15);
	getch_eraseMSG();
}