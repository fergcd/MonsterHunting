#include"Header.h"

void CharacterDown(int index, sCharacter* character)	//Battle���� ĳ���� �������� �ִϸ��̼�
{
	character_name = (CharacterName)index;	//character_name�� �ڷ����� CharacterName, �� �������ε� �ҽ����� Ȯ���ڸ� c���� cpp�� �ٲٴϱ� index�� �ڷ����� int�� �������� ���� �ٸ� �ڷ������� �νĵǼ� ĳ��Ʈ ������ ���
	
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