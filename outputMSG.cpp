#include"Header.h"

void outputMSG(char* MSG)	//Battle에서 메세지 출력 함수
{
	unsigned int index;
	unsigned int arr;
	char First[3];

	for (arr = 0; arr <= strlen(MSG) / 2 - 1; arr++)
	{
		for (index = 0; index <= 2; index++)
		{
			if (index == 2)
			{
				First[index] = '\0';
			}
			else
			{
				First[index] = MSG[index + 2 * arr];
			}
		}
		printf("%s", First);

		Sleep(50);

		if (_kbhit())
		{
			eraseMSG();
			getch_eraseMSG();
			printf("%s", MSG);
			break;
		}
	}
}