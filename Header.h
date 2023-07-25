#include<stdio.h>	//printf(""); ������
#include<conio.h>	//_getch(); ������
#include<windows.h>	//gotoxy(int,int);, textcolor();, Sleep(); ������
#include<stdlib.h>	//system("cls"); ������
#include<string.h>	//strcpy_s( , ); ������

#define BLACK			(0)		// background
#define GREEN			(2)		// Ÿ��Ʋ����
#define RED				(4)		// HP����
#define LIGHTGRAY		(7)		// �ؽ�Ʈ
#define LIGHTBLUE		(9)		// AP����
#define LIGHTGREEN		(10)	// HP����
#define LIGHTRED		(12)	// �÷��̾� �̸� �Է� ���
#define LIGHTMAGENTA	(13)	// ȭ�� ����
#define YELLOW			(14)	// �������, ������
#define WHITE			(15)	// ������

typedef enum { NOCURSOR, SHOWCURSOR } CURSOR_TYPE;	//SetCursorType�Լ��� �Ű����� �ڷ������� ���� ����� ���� �ڷ���


enum class eCharacterName
{
	Player,
	Stone,
	Flower,
	Tree,
	Ant,
	GrassHopper,
	InfinitesimalCalculusTextBook,
	Grenade,
	Billy,
	CamelCriket,
	Gandhi
};

enum class eCharacterExpression
{
	PlayerNormal,
	PlayerDisappointed,
	PlayerDamaged,
	PlayerDead,
	PlayerFatalKilled,
	PlayerPowerUp,
	PlayerHealthUp,
	PlayerWhatThe,
	BillyGozarani,
	BillyNormalDead,
	BillyGozaDead,
	GrassHopperNormal,
	GrassHopperDamaged,
	GrassHopperDead,
	CamelCriketNormal,
	CamelCriketDamaged,
	CamelCriketDead,
	GandhiPissedOff,
	GandhiSuperSaiyan,
	GandhiDead
};

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
} sCharacter;	//typedef�� ����Ͽ� struct Ű���� ���� sCharacter�� ������������ ���


bool Title();	//Ÿ��Ʋȭ���� ����ݴϴ�. ���� ����/���� ������ �����մϴ�.
void InputName(sCharacter* character);	//�÷��̾��� �̸��� �Է¹޽��ϴ�. �̸� �Է� �� ���͸� ġ�� �˴ϴ�.
void Battle(eCharacterName characterName, sCharacter* character);	//����
eCharacterName Select(sCharacter* character);	//����� ���� ����
void TheEnd(sCharacter* character, char KillingCount);	//���� 10������ �� ����Ʈ�Ȱų� �÷��̾ �й����� �� ����ȭ���� ����մϴ�.
void reset(sCharacter* character);	//������ �ٽ� ������ �� ��� ĳ������ ���¸� �ʱ�ȭ �մϴ�.
void resetFunction(sCharacter* character, int index, int HealthPoint, int MaxHealthPoint, int AttackPoint);	//reset���� ���̴� �Լ�

void SetCursorType(CURSOR_TYPE c);	//Ŀ���� ����, ũ�⸦ �����մϴ�.
void StateDisplay(int index, sCharacter* character, int previousHP, int previousAP, int x, int y);	//Battle���� ĳ���� ���� ǥ��
void eraseMSG();	//�޼���â ���� �����
void getch_eraseMSG();	//_getch()�� eraseMSG() ��� ��ģ �Լ�. ���� �� ���̱淡 ��������ϴ�.
void outputMSG(char* MSG);	//Battle���� �޼��� ��� �Լ�
void CharacterExpression(eCharacterName characterName, sCharacter* character, eCharacterExpression characterExpression);	//Battle���� ĳ������ ǥ�� ��ȭ
void CharacterDisplay(eCharacterName characterName, sCharacter* character);	//Battle���� ĳ���� �̹��� ǥ��
void CharacterDisplayFunction(eCharacterName characterName, sCharacter* character, int x, int y);	//CharacterDisplay���� ���̴� �Լ�
void StateCharacterDisplay(eCharacterName characterName, sCharacter* character, int partially);	//ĳ���� �̹����� ���� ǥ��(ĳ������ ��� ��� �ִϸ��̼ǿ��� ���Դϴ�)
void ItemDeactivate(int x, int index, sCharacter* character);	//��, ����, ����ź���Լ� ���� �� �ִ� ������ �� ���� �Ⱦ���Ʈ�� ������ �������� ��Ͽ��� �Ⱥ��̰� �մϴ�.(1, 2, 6)
void Use_Item_or_Skill(int x, int y, eCharacterName characterName, sCharacter* character);	//������ �Ǵ� ��� ��� �ִϸ��̼� �Լ�
void ItemAcquire(int index, sCharacter* character);	//������ ���� �ִϸ��̼�
void ItemAcquireFunction(int x, int y, int MaxRow, char Item[][22]);	//ItemAcquire���� ���̴� �Լ�
void arm(int frame, char square[3]);	//�÷��̾� �� �ִϸ��̼�
void EatItem(int item, sCharacter* character, char Item[][22]);	//������ ����
void MouthOpenClose(int motion, char BigMouth[][22]);	//�÷��̾� ����
void boom();	//��
void CharacterDown(eCharacterName characterName, sCharacter* character);	//Battle���� ĳ���� �������� �ִϸ��̼�
void CharacterDownFunction(eCharacterName characterName, sCharacter* character, int x, int y);	//CharacterDown���� ���̴� �Լ�
void Reward(eCharacterName characterName, sCharacter* character);	//�� ���͸� ����Ʈ���� �� ���� �̺�Ʈ �߻�
void CharacterAttack(eCharacterName characterName, sCharacter* character);	//Battle���� ĳ���� ���� �ִϸ��̼�
void CharacterAttackFunction(eCharacterName characterName, sCharacter* character, int x, int y);	//CharacterAttack���� ���̴� �Լ�
void corn();	//������
void CharacterBlink(eCharacterName characterName, sCharacter* character, WORD color);	//Battle���� ĳ���� ������ �ִϸ��̼�
void CharacterBlinkFunction(eCharacterName characterName, sCharacter* character, int x, int y, WORD color);	//CharacterBlink���� ���̴� �Լ�
void Adjust_NegativeHealthPoint_To_Zero(int index, sCharacter* character);	//ĳ������ ü���� ������ ���� ��  ü���� 0���� �������ݴϴ�.
void CheckDuplication(int index, sCharacter* character, int* NoDuplication, eCharacterName* SelectedMonster, int* x, int* y);	//Select���� ������ ���Ͱ� �̹� �̹� ����Ʈ�� �������� Ȯ��.  �Ⱦ���Ʈ�� ���͸� ����
void Blink(char CharacterName[21], int x, int y, WORD color);	//���� ������ ȿ��

void textcolor(WORD color);	//���� �� ����
void gotoxy(SHORT x, SHORT y);	//Ŀ�� ��ġ ����