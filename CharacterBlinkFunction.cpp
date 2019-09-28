#include"Header.h"

void CharacterBlinkFunction(int index, sCharacter* character, int x, int y, int WhatBlink)	//CharacterBlink에서 쓰이는 함수
{
	int blink = 1, color = 0, row = 1;

	while(blink <= 20)
	{
		if(color == 0)
		{
			textcolor(WhatBlink);	
			color++;
		}
		else
		{
			textcolor(7);
			color--;
		}

		if(x == 3)
			CharacterExpression(0, character, WhatBlink);
		else
		{
			if(WhatBlink == 4)
			{
				switch(index)
				{
				case 5:
					CharacterExpression(index, character, 56);
					break;
				case 9:
					CharacterExpression(index, character, 96);
					break;
				default:
					CharacterDisplay(index, character);
					break;
				}
			}
			else
				CharacterDisplay(index, character);
		}
		
		Sleep(30);
		
		blink++;
	}
}