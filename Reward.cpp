#include"Header.h"

void Reward(int index, sCharacter* character)	//각 몬스터를 쓰러트렸을 때 보상 이벤트 발생
{	//WhatBlink - 4:어두운빨강(HP감소)  10:초록(HP증가)  9:파랑(AP증가)
	int previousHP = character[0].HealthPoint, previousAP = character[0].AttackPoint;

	char nothing[2][22] = {"  ",
						   "  "};
	
	int dummy = _getch();
	CharacterExpression(0, character, 0);
	eraseMSG();

	character_name = (CharacterName)index;	//character_name의 자료형은 CharacterName, 즉 열거형인데 소스파일 확장자를 c에서 cpp로 바꾸니까 index의 자료형인 int와 열거형이 서로 다른 자료형으로 인식되서 캐스트 연산자 사용
	switch(character_name)	//쓰러트린 몬스터에 따라 플레이어의 상태가 달리 변화합니다.
	{
	case Stone:
		printf("%s이(가) 짱돌을 획득했습니다.", character[0].name);
		ItemAcquire(Stone, character);
		break;
	case Flower:
		printf("%s이(가) %s을 획득했습니다.", character[0].name, character[index].name);
		ItemAcquire(Flower, character);
		break;
	case Tree:
		printf("%s이(가) %s열매를 획득했습니다.", character[0].name, character[index].name);
		ItemAcquire(Tree, character);
		getch_eraseMSG();
		printf("%s이(가) %s열매를 먹었습니다.", character[0].name, character[index].name);
		ItemAcquire(13, character);
		eraseMSG();
		printf("!?");
		CharacterExpression(0, character, 14);
		getch_eraseMSG();
		printf("%s이(가) 배탈이 나서 체력이 3 떨어졌습니다.", character[0].name);
		CharacterBlink(0, character, 4);
		character[0].HealthPoint -= 3;
		Adjust_NegativeHealthPoint_To_Zero(0, character);
		break;
	case Ant:
		printf("%s이(가) %s를 먹었습니다.", character[0].name, character[index].name);
		EatItem(4, character, nothing);
		getch_eraseMSG();
		printf("%s의 체력이 1 상승했습니다.", character[0].name);
		CharacterBlink(0, character, 10);
		character[0].HealthPoint += 1;
		break;
	case GrassHopper:
		printf("%s이(가) %s를 먹었습니다.", character[0].name, character[index].name);
		EatItem(4, character, nothing);
		getch_eraseMSG();
		printf("%s의 체력이 5 상승했습니다.", character[0].name);
		CharacterBlink(0, character, 10);
		character[0].HealthPoint += 5;
		StateDisplay(0, character, previousHP, previousAP, 40, 15);
		previousHP = character[0].HealthPoint;
		getch_eraseMSG();
		printf("%s는 훌륭한 단백질 공급원이었기 때문에", character[index].name);
		gotoxy(4, 23);
		printf("%s의 공격력이 5 상승했습니다.", character[0].name);
		CharacterBlink(0, character, 9);
		character[0].AttackPoint += 5;
		break;
	case Infinitesimal_Calculus_TextBook:
		printf("%s이(가) %s을 먹었습니다.", character[0].name, character[index].name);
		EatItem(4, character, nothing);
		getch_eraseMSG();
		printf("하지만 %s의 수학성적에는 변화가 없었습니다.", character[0].name);
		CharacterExpression(0, character, 1);
		break;
	case Grenade:
		printf("%s이(가) %s을 획득했습니다.", character[0].name, character[index].name);
		ItemAcquire(Grenade, character);
		break;
	case Billy:
		printf("%s이(가) %s를 먹었습니다.", character[0].name, character[index].name);
		EatItem(4, character, nothing);
		getch_eraseMSG();
		printf("%s이(가) '도발' 기술을 습득했습니다.", character[0].name);
		CharacterBlink(0, character, 14);
		getch_eraseMSG();
		printf("%s의 체력이 5 상승했습니다.", character[0].name);
		CharacterBlink(0, character, 10);
		character[0].HealthPoint += 5;
		StateDisplay(0, character, previousHP, previousAP, 40, 15);
		previousHP = character[0].HealthPoint;
		getch_eraseMSG();
		printf("Oh My Shoulder ~ ♥");
		getch_eraseMSG();
		printf("%s의 공격력이 10 상승했습니다.", character[0].name);
		CharacterBlink(0, character, 9);
		character[0].AttackPoint += 10;
		break;
	case Camel_Criket:
		printf("%s이(가) %s를 먹었습니다.", character[0].name, character[index].name);
		EatItem(4, character, nothing);
		getch_eraseMSG();
		printf("%s의 체력이 15 상승했습니다.", character[0].name);
		CharacterBlink(0, character, 10);
		character[0].HealthPoint += 15;
		StateDisplay(0, character, previousHP, previousAP, 40, 15);
		previousHP = character[0].HealthPoint;
		getch_eraseMSG();
		printf("%s는 매우 훌륭한 단백질 공급원이었기 때문에", character[index].name);
		gotoxy(4, 23);
		printf("%s의 공격력이 5 상승했습니다.", character[0].name);
		CharacterBlink(0, character, 9);
		character[0].AttackPoint += 5;
		break;
	case Gandhi:
		printf("%s이(가) 옥수수를 획득했습니다.", character[0].name);
		ItemAcquire(Gandhi, character);
		break;
	}
	StateDisplay(0, character, previousHP, previousAP, 40, 15);
	getch_eraseMSG();
}