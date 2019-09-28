#include"Header.h"

void CharacterDisplay(int index, sCharacter* character)	//Battle에서 캐릭터 이미지 표현(30x11사이즈)
{//	x = 3, y = 9	x = 48, y = 2
	character_name = (CharacterName)index;	//character_name의 자료형은 CharacterName, 즉 열거형인데 소스파일 확장자를 c에서 cpp로 바꾸니까 index의 자료형인 int와 열거형이 서로 다른 자료형으로 인식되서 캐스트 연산자 사용

	SetCursorType(NOCURSOR);

	switch(character_name)	//사이즈 30x11
	{
	case Player:
		CharacterDisplayFunction(0, character, 3, 9);
		break;
	case Stone:
		CharacterDisplayFunction(index, character, 48, 3);
		break;
	case Flower:
		CharacterDisplayFunction(index, character, 48, 3);
		break;
	case Tree:
		CharacterDisplayFunction(index, character, 48, 3);
		break;
	case Ant:
		CharacterDisplayFunction(index, character, 48, 3);
		break;
	case GrassHopper:
		CharacterDisplayFunction(index, character, 48, 3);
		break;
	case Infinitesimal_Calculus_TextBook:
		CharacterDisplayFunction(index, character, 48, 3);
		break;
	case Grenade:
		CharacterDisplayFunction(index, character, 48, 3);
		break;
	case Billy:
		CharacterDisplayFunction(index, character, 48, 3);
		break;
	case Camel_Criket:
		CharacterDisplayFunction(index, character, 48, 3);
		break;
	case Gandhi:
		CharacterDisplayFunction(index, character, 48, 3);
		break;
	}

	SetCursorType(SHOWCURSOR);
}