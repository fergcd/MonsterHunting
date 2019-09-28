#include"Header.h"

void CharacterAttack(int index, sCharacter* character)	//Battle에서 캐릭터 공격 애니메이션
{
	character_name = (CharacterName)index;	//character_name의 자료형은 CharacterName, 즉 열거형인데 소스파일 확장자를 c에서 cpp로 바꾸니까 index의 자료형인 int와 열거형이 서로 다른 자료형으로 인식되서 캐스트 연산자 사용
	
	SetCursorType(NOCURSOR);
	
	Sleep(300);
	switch(character_name)
	{
	case Player:
		CharacterAttackFunction(0, character, 3, 9);
		break;
	case Stone:
		CharacterAttackFunction(index, character, 48, 3);
		break;
	case Flower:
		CharacterAttackFunction(index, character, 48, 3);
		break;
	case Tree:
		CharacterAttackFunction(index, character, 48, 3);
		break;
	case Ant:
		CharacterAttackFunction(index, character, 48, 3);
		break;
	case GrassHopper:
		CharacterAttackFunction(index, character, 48, 3);
		break;
	case Infinitesimal_Calculus_TextBook:
		CharacterAttackFunction(index, character, 48, 3);
		break;
	case Grenade:
		CharacterAttackFunction(index, character, 48, 3);
		break;
	case Billy:
		CharacterAttackFunction(index, character, 48, 3);
		break;
	case Camel_Criket:
		CharacterAttackFunction(index, character, 48, 3);
		break;
	case Gandhi:
		CharacterAttackFunction(index, character, 48, 3);
		break;
	}
	Sleep(300);

	SetCursorType(SHOWCURSOR);
}