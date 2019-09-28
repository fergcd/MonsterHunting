#include<stdio.h>	//printf("");, fflush(stdin); 쓰려고
#include<conio.h>	//getch(); 쓰려고
#include<windows.h>	//gotoxy(int,int);, textcolor();, Sleep(); 쓰려고
#include<stdlib.h>	//system("cls"); 쓰려고
#include<string.h>	//strcpy( , ); 쓰려고
#include<math.h>	//abs(); 쓰려고


typedef enum {NOCURSOR, SHOWCURSOR} CURSOR_TYPE;	//SetCursorType함수의 매개변수 자료형으로 사용될 사용자 정의 자료형


enum CharacterName {Player, Stone, Flower, Tree, Ant, GrassHopper, Infinitesimal_Calculus_TextBook, Grenade, Billy, Camel_Criket, Gandhi};	//열거체 정의

extern CharacterName character_name;	//main함수에 있던 character_name 선언


extern char KillingCount;	//main함수에 있던 KillingCount 선언


typedef struct Character	//태그명이 Character인 구조체 정의
{
	char name[21];	//Character의 이름으로 사용될 맴버
	int HealthPoint;	//Character의 현재체력으로 사용될 멤버
	int MaxHealthPoint;	//Character의 최대체력으로 사용될 멤버
	int AttackPoint;	//Character의 공격력으로 사용될 멤버
	char CharacterIMG[11][42];	//캐릭터 이미지(이미지 사이즈 30x11) => 원레 [11][31]로 30x11이었는데 소스파일 확장자를 c에서 cpp로 바꾸니까 캐릭터 그리는 부분에서 2byte를 잡아먹던 특수문자가 3byte를 잡아먹게 되서 수정
	int x;	//Character가 짱돌을 맞을 부위의 좌표
	int y;	//Character가 짱돌을 맞을 부위의 좌표
}sCharacter;	//typedef을 사용하여 struct 키워드 없이 sCharacter를 데이터형으로 사용


int Title();	//타이틀화면을 띄워줍니다. 게임 시작/종료 선택이 가능합니다.
void InputName(sCharacter* character);	//플레이어의 이름을 입력받습니다. 이름 입력 후 엔터를 치면 됩니다.
void Battle(int index, sCharacter* character);	//전투
int Select(sCharacter* character);	//상대할 몬스터 선택
void TheEnd(sCharacter* character, char KillingCount);	//몬스터 10마리를 다 쓰러트렸거나 플레이어가 패배했을 때 엔딩화면을 출력합니다.
void reset(sCharacter* character);	//게임을 다시 시작할 시 모든 캐릭터의 상태를 초기화 합니다.
void resetFunction(sCharacter* character, int index, int HealthPoint, int MaxHealthPoint, int AttackPoint);	//reset에서 쓰이는 함수

void SetCursorType(CURSOR_TYPE c);	//커서의 유무, 크기를 설정합니다.
void StateDisplay(int index, sCharacter* character, int previousHP, int previousAP, int x, int y);	//Battle에서 캐릭터 상태 표시
void eraseMSG();	//메세지창 내용 지우기
void getch_eraseMSG();	//getch()랑 eraseMSG() 기능 합친 함수. 여러번 쓰이길레 만들었습니다.
void outputMSG(char* MSG);	//Battle에서 메세지 출력 함수
void CharacterExpression(int index, sCharacter* character, int WhatExpression);	//Battle에서 캐릭터의 표정 변화
void CharacterDisplay(int index, sCharacter* character);	//Battle에서 캐릭터 이미지 표현
void CharacterDisplayFunction(int index, sCharacter* character, int x, int y);	//CharacterDisplay에서 쓰이는 함수
void StateCharacterDisplay(int index, sCharacter* character, int partially);	//캐릭터 이미지와 상태 표시(캐릭터의 기술 사용 애니메이션에서 쓰입니다)
void ItemDeactivate(int x, int index, sCharacter* character);	//꽃, 나무, 수류탄에게서 얻을 수 있는 아이템 중 아직 안쓰러트린 몬스터의 아이템은 목록에서 안보이게 합니다.(1, 2, 6)
void Use_Item_or_Skill(int x, int y, int index, sCharacter* character);	//아이템 또는 기술 사용 애니메이션 함수
void ItemAcquire(int index, sCharacter* character);	//아이템 습득 애니메이션
void ItemAcquireFunction(int x, int y, int MaxRow, char Item[][22]);	//ItemAcquire에서 쓰이는 함수
void arm(int frame, char square[3]);	//플레이어 팔 애니메이션
void EatItem(int item, sCharacter* character, char Item[][22]);	//아이템 섭취
void MouthOpenClose(int motion, char BigMouth[][22]);	//플레이어 쩝쩝
void boom();	//펑
void CharacterDown(int index, sCharacter* character);	//Battle에서 캐릭터 쓰러지는 애니메이션
void CharacterDownFunction(int index, sCharacter* character, int x, int y);	//CharacterDown에서 쓰이는 함수
void Reward(int index, sCharacter* character);	//각 몬스터를 쓰러트렸을 때 보상 이벤트 발생
void CharacterAttack(int index, sCharacter* character);	//Battle에서 캐릭터 공격 애니메이션
void CharacterAttackFunction(int index, sCharacter* character, int x, int y);	//CharacterAttack에서 쓰이는 함수
void corn();	//옥수수
void CharacterBlink(int index, sCharacter* character, int WhatBlink);	//Battle에서 캐릭터 깜빡임 애니메이션
void CharacterBlinkFunction(int index, sCharacter* character, int x, int y, int WhatBlink);	//CharacterBlink에서 쓰이는 함수
void Adjust_NegativeHealthPoint_To_Zero(int index, sCharacter* character);	//캐릭터의 체력이 음수가 됬을 때  체력을 0으로 조정해줍니다.
void CheckDuplication(int index, sCharacter* character, int *NoDuplication, int *SelectedMonster, int *x, int *y);	//Select에서 선택한 몬스터가 이미 이미 쓰러트린 몬스터인지 확인.  안쓰러트린 몬스터면 진행
void Blink(char CharacterName[21], int x, int y, int colour);	//글자 깜빡임 효과

void textcolor(int color);	//글자 색 변경
void gotoxy(int x, int y);	//커서 위치 제어