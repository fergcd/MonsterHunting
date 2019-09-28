#include"Header.h"

void CharacterBlink(int index, sCharacter* character, int WhatBlink)	//Battle에서 캐릭터 깜빡임 애니메이션
{	//WhatBlink - 4:어두운빨강(HP감소)  10:초록(HP증가)  9:파랑(AP증가)	14:노랑(기술습득)
	character_name = (CharacterName)index;	//character_name의 자료형은 CharacterName, 즉 열거형인데 소스파일 확장자를 c에서 cpp로 바꾸니까 index의 자료형인 int와 열거형이 서로 다른 자료형으로 인식되서 캐스트 연산자 사용
	
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