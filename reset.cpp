#include"Header.h"

void reset(sCharacter* character)	//������ �ٽ� ������ �� ��� ĳ������ ���¸� �ʱ�ȭ �մϴ�.
{
	KillingCount = 0;

	resetFunction(character, 0, 10, 10, 5);	//�÷��̾�
	strcpy(character[0].name, "�÷��̾�");
	strcpy(character[0].CharacterIMG[0], "                              ");
	strcpy(character[0].CharacterIMG[1], "        ������            ");
	strcpy(character[0].CharacterIMG[2], "      �������            ");
	strcpy(character[0].CharacterIMG[3], "      �����ˡ��          ");
	strcpy(character[0].CharacterIMG[4], "      ��������          ");
	strcpy(character[0].CharacterIMG[5], "      �������            ");
	strcpy(character[0].CharacterIMG[6], "        �������          ");
	strcpy(character[0].CharacterIMG[7], "      ������              ");
	strcpy(character[0].CharacterIMG[8], "    ��������            ");
	strcpy(character[0].CharacterIMG[9], "   ���������           ");
	strcpy(character[0].CharacterIMG[10], "  ����������          ");


	resetFunction(character, 1, 1, 1, 1);	//������

	resetFunction(character, 2, 1, 1, 0);	//��

	resetFunction(character, 3, 20, 20, 1);	//����

	resetFunction(character, 4, 6, 6, 1);	//����

	resetFunction(character, 5, 10, 10, 2);	//�޶ѱ�
	strcpy(character[5].CharacterIMG[5], "   ���� ���ΥΡ�Ρ��ΡУ�_   ");

	resetFunction(character, 6, 30, 30, 3);	//��������å

	resetFunction(character, 7, 44, 44, 4);	//����ź

	resetFunction(character, 8, 69, 69, 19);	//����
	strcpy(character[8].CharacterIMG[1], "         ��  ����             ");
	strcpy(character[8].CharacterIMG[2], "        �Σ�����`�� ��        ");
	strcpy(character[8].CharacterIMG[6], "          ����������          ");

	resetFunction(character, 9, 14, 14, 4);	//������
	strcpy(character[9].CharacterIMG[7], "  �����ܡ������� /����  ��    ");

	resetFunction(character, 10, 10, 10, 0);	//����
	strcpy(character[10].CharacterIMG[0], "                              ");
	strcpy(character[10].CharacterIMG[1], "          .---._              ");
	strcpy(character[10].CharacterIMG[2], "        ��      '.            ");
	strcpy(character[10].CharacterIMG[3], "       ��_߲__   ��           ");
	strcpy(character[10].CharacterIMG[4], "      ����  ��   ��           ");
	strcpy(character[10].CharacterIMG[5], "        �ܫϡܦ�����          ");
	strcpy(character[10].CharacterIMG[6], "       ��<..>��  ��           ");
	strcpy(character[10].CharacterIMG[7], "        ��''\"�� ��            ");
	strcpy(character[10].CharacterIMG[8], "    ___  ����   ��    __      ");
	strcpy(character[10].CharacterIMG[9], "   ��  ����     ������  ��    ");
	strcpy(character[10].CharacterIMG[10], "  ��     ��-��������     ��   ");
}