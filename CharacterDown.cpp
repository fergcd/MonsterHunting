#include"Header.h"

void CharacterDown(int index, sCharacter* character)	//Battle에서 캐릭터 쓰러지는 애니메이션
{
	character_name = (CharacterName)index;	//character_name의 자료형은 CharacterName, 즉 열거형인데 소스파일 확장자를 c에서 cpp로 바꾸니까 index의 자료형인 int와 열거형이 서로 다른 자료형으로 인식되서 캐스트 연산자 사용
	
	SetCursorType(NOCURSOR);
	
	Sleep(300);
	switch(character_name)
	{
	case Player:
		CharacterDownFunction(0, character, 3, 9);
		break;
	case Stone:
		CharacterDownFunction(index, character, 48, 3);
		break;
	case Flower:
		CharacterDownFunction(index, character, 48, 3);
		break;
	case Tree:
		CharacterDownFunction(index, character, 48, 3);
		break;
	case Ant:
		CharacterDownFunction(index, character, 48, 3);
		break;
	case GrassHopper:
		CharacterDownFunction(index, character, 48, 3);
		break;
	case Infinitesimal_Calculus_TextBook:
		CharacterDownFunction(index, character, 48, 3);
		break;
	case Grenade:
		CharacterDownFunction(index, character, 48, 3);
		break;
	case Billy:
		CharacterDownFunction(index, character, 48, 3);
		break;
	case Camel_Criket: 
		CharacterDownFunction(index, character, 48, 3);
		break;
	case Gandhi:
		CharacterDownFunction(index, character, 48, 3);
		break;
	}
	Sleep(300);

	SetCursorType(SHOWCURSOR);
}