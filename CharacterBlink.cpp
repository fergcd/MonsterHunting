#include"Header.h"

void CharacterBlink(int index, sCharacter* character, int WhatBlink)	//Battle���� ĳ���� ������ �ִϸ��̼�
{	//WhatBlink - 4:��ο��(HP����)  10:�ʷ�(HP����)  9:�Ķ�(AP����)	14:���(�������)
	character_name = (CharacterName)index;	//character_name�� �ڷ����� CharacterName, �� �������ε� �ҽ����� Ȯ���ڸ� c���� cpp�� �ٲٴϱ� index�� �ڷ����� int�� �������� ���� �ٸ� �ڷ������� �νĵǼ� ĳ��Ʈ ������ ���
	
	SetCursorType(NOCURSOR);
	
	Sleep(300);
	switch(character_name)
	{
	case Player:
		CharacterBlinkFunction(0, character, 3, 9, WhatBlink);
		break;
	case Stone:
		CharacterBlinkFunction(index, character, 48, 3, WhatBlink);
		break;
	case Flower:
		CharacterBlinkFunction(index, character, 48, 3, WhatBlink);
		break;
	case Tree:
		CharacterBlinkFunction(index, character, 48, 3, WhatBlink);
		break;
	case Ant:
		CharacterBlinkFunction(index, character, 48, 3, WhatBlink);
		break;
	case GrassHopper:
		CharacterBlinkFunction(index, character, 48, 3, WhatBlink);
		break;
	case Infinitesimal_Calculus_TextBook:
		CharacterBlinkFunction(index, character, 48, 3, WhatBlink);
		break;
	case Grenade:
		CharacterBlinkFunction(index, character, 48, 3, WhatBlink);
		break;
	case Billy:
		CharacterBlinkFunction(index, character, 48, 3, WhatBlink);
		break;
	case Camel_Criket:
		CharacterBlinkFunction(index, character, 48, 3, WhatBlink);
		break;
	case Gandhi: 
		CharacterBlinkFunction(index, character, 48, 3, WhatBlink);
		break;
	}
	Sleep(300);

	if(character_name == Player && WhatBlink != 4)
		CharacterExpression(0, character, 0);

	SetCursorType(SHOWCURSOR);
}