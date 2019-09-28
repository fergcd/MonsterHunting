#include<stdio.h>	//printf("");, fflush(stdin); ������
#include<conio.h>	//getch(); ������
#include<windows.h>	//gotoxy(int,int);, textcolor();, Sleep(); ������
#include<stdlib.h>	//system("cls"); ������
#include<string.h>	//strcpy( , ); ������
#include<math.h>	//abs(); ������


typedef enum {NOCURSOR, SHOWCURSOR} CURSOR_TYPE;	//SetCursorType�Լ��� �Ű����� �ڷ������� ���� ����� ���� �ڷ���


enum CharacterName {Player, Stone, Flower, Tree, Ant, GrassHopper, Infinitesimal_Calculus_TextBook, Grenade, Billy, Camel_Criket, Gandhi};	//����ü ����

extern CharacterName character_name;	//main�Լ��� �ִ� character_name ����


extern char KillingCount;	//main�Լ��� �ִ� KillingCount ����


typedef struct Character	//�±׸��� Character�� ����ü ����
{
	char name[21];	//Character�� �̸����� ���� �ɹ�
	int HealthPoint;	//Character�� ����ü������ ���� ���
	int MaxHealthPoint;	//Character�� �ִ�ü������ ���� ���
	int AttackPoint;	//Character�� ���ݷ����� ���� ���
	char CharacterIMG[11][42];	//ĳ���� �̹���(�̹��� ������ 30x11) => ���� [11][31]�� 30x11�̾��µ� �ҽ����� Ȯ���ڸ� c���� cpp�� �ٲٴϱ� ĳ���� �׸��� �κп��� 2byte�� ��ƸԴ� Ư�����ڰ� 3byte�� ��Ƹ԰� �Ǽ� ����
	int x;	//Character�� ¯���� ���� ������ ��ǥ
	int y;	//Character�� ¯���� ���� ������ ��ǥ
}sCharacter;	//typedef�� ����Ͽ� struct Ű���� ���� sCharacter�� ������������ ���


int Title();	//Ÿ��Ʋȭ���� ����ݴϴ�. ���� ����/���� ������ �����մϴ�.
void InputName(sCharacter* character);	//�÷��̾��� �̸��� �Է¹޽��ϴ�. �̸� �Է� �� ���͸� ġ�� �˴ϴ�.
void Battle(int index, sCharacter* character);	//����
int Select(sCharacter* character);	//����� ���� ����
void TheEnd(sCharacter* character, char KillingCount);	//���� 10������ �� ����Ʈ�Ȱų� �÷��̾ �й����� �� ����ȭ���� ����մϴ�.
void reset(sCharacter* character);	//������ �ٽ� ������ �� ��� ĳ������ ���¸� �ʱ�ȭ �մϴ�.
void resetFunction(sCharacter* character, int index, int HealthPoint, int MaxHealthPoint, int AttackPoint);	//reset���� ���̴� �Լ�

void SetCursorType(CURSOR_TYPE c);	//Ŀ���� ����, ũ�⸦ �����մϴ�.
void StateDisplay(int index, sCharacter* character, int previousHP, int previousAP, int x, int y);	//Battle���� ĳ���� ���� ǥ��
void eraseMSG();	//�޼���â ���� �����
void getch_eraseMSG();	//getch()�� eraseMSG() ��� ��ģ �Լ�. ������ ���̱淹 ��������ϴ�.
void outputMSG(char* MSG);	//Battle���� �޼��� ��� �Լ�
void CharacterExpression(int index, sCharacter* character, int WhatExpression);	//Battle���� ĳ������ ǥ�� ��ȭ
void CharacterDisplay(int index, sCharacter* character);	//Battle���� ĳ���� �̹��� ǥ��
void CharacterDisplayFunction(int index, sCharacter* character, int x, int y);	//CharacterDisplay���� ���̴� �Լ�
void StateCharacterDisplay(int index, sCharacter* character, int partially);	//ĳ���� �̹����� ���� ǥ��(ĳ������ ��� ��� �ִϸ��̼ǿ��� ���Դϴ�)
void ItemDeactivate(int x, int index, sCharacter* character);	//��, ����, ����ź���Լ� ���� �� �ִ� ������ �� ���� �Ⱦ���Ʈ�� ������ �������� ��Ͽ��� �Ⱥ��̰� �մϴ�.(1, 2, 6)
void Use_Item_or_Skill(int x, int y, int index, sCharacter* character);	//������ �Ǵ� ��� ��� �ִϸ��̼� �Լ�
void ItemAcquire(int index, sCharacter* character);	//������ ���� �ִϸ��̼�
void ItemAcquireFunction(int x, int y, int MaxRow, char Item[][22]);	//ItemAcquire���� ���̴� �Լ�
void arm(int frame, char square[3]);	//�÷��̾� �� �ִϸ��̼�
void EatItem(int item, sCharacter* character, char Item[][22]);	//������ ����
void MouthOpenClose(int motion, char BigMouth[][22]);	//�÷��̾� ����
void boom();	//��
void CharacterDown(int index, sCharacter* character);	//Battle���� ĳ���� �������� �ִϸ��̼�
void CharacterDownFunction(int index, sCharacter* character, int x, int y);	//CharacterDown���� ���̴� �Լ�
void Reward(int index, sCharacter* character);	//�� ���͸� ����Ʈ���� �� ���� �̺�Ʈ �߻�
void CharacterAttack(int index, sCharacter* character);	//Battle���� ĳ���� ���� �ִϸ��̼�
void CharacterAttackFunction(int index, sCharacter* character, int x, int y);	//CharacterAttack���� ���̴� �Լ�
void corn();	//������
void CharacterBlink(int index, sCharacter* character, int WhatBlink);	//Battle���� ĳ���� ������ �ִϸ��̼�
void CharacterBlinkFunction(int index, sCharacter* character, int x, int y, int WhatBlink);	//CharacterBlink���� ���̴� �Լ�
void Adjust_NegativeHealthPoint_To_Zero(int index, sCharacter* character);	//ĳ������ ü���� ������ ���� ��  ü���� 0���� �������ݴϴ�.
void CheckDuplication(int index, sCharacter* character, int *NoDuplication, int *SelectedMonster, int *x, int *y);	//Select���� ������ ���Ͱ� �̹� �̹� ����Ʈ�� �������� Ȯ��.  �Ⱦ���Ʈ�� ���͸� ����
void Blink(char CharacterName[21], int x, int y, int colour);	//���� ������ ȿ��

void textcolor(int color);	//���� �� ����
void gotoxy(int x, int y);	//Ŀ�� ��ġ ����