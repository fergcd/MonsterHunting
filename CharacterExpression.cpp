#include"Header.h"

void CharacterExpression(int index, sCharacter* character, int WhatExpression)	//Battle���� ĳ������ ǥ�� ��ȭ
{
	switch(WhatExpression)
	{
	case 0:
		strcpy_s(character[index].CharacterIMG[3], "      �����ˡ��          ");
		break;
	case 1:
		strcpy_s(character[index].CharacterIMG[3], "      ����᦬���          ");
		break;
	case 4:
		strcpy_s(character[index].CharacterIMG[3], "      ����᣾���          ");
		break;
	case 44:
		strcpy_s(character[index].CharacterIMG[3], "      ����᡿���          ");
		break;
	case 444:
		strcpy_s(character[index].CharacterIMG[1], "                              ");
		strcpy_s(character[index].CharacterIMG[2], "                              ");
		strcpy_s(character[index].CharacterIMG[3], "                              ");
		strcpy_s(character[index].CharacterIMG[4], "                  ��          ");
		strcpy_s(character[index].CharacterIMG[5], "        ���  ���            ");
		strcpy_s(character[index].CharacterIMG[6], "      ��  ������          ");
		break;
	case 9:
		strcpy_s(character[index].CharacterIMG[3], "      �����ڡ��          ");
		break;
	case 10:
		strcpy_s(character[index].CharacterIMG[3], "      �����ܡ��          ");
		break;
	case 14:
		strcpy_s(character[index].CharacterIMG[3], "      ���������          ");
		break;
	case 4444:
		strcpy_s(character[index].CharacterIMG[1], "         Ҭ  ������           ");
		strcpy_s(character[index].CharacterIMG[2], "        �Σ���������Ҭ        ");
		strcpy_s(character[index].CharacterIMG[6], "          ����������          ");
		break;
	case 44444:
		strcpy_s(character[index].CharacterIMG[2], "        �Σ�����x�� Ҭ        ");
		strcpy_s(character[index].CharacterIMG[6], "          �����ա���          ");
		break;
	case 444444:
		strcpy_s(character[index].CharacterIMG[2], "        �Σ���������Ҭ        ");
		strcpy_s(character[index].CharacterIMG[6], "          ����������          ");
		break;
	case 50:
		strcpy_s(character[index].CharacterIMG[5], "   ���� ���ΥΡ�Ρ��ΡУ�_   ");
		break;
	case 54:
		strcpy_s(character[index].CharacterIMG[5], "   ���� ���ΥΡ�Ρ��ΡУ�_   ");
		break;
	case 56:
		strcpy_s(character[index].CharacterIMG[5], "   ���� ���ΥΡ�Ρ��ΡУ�_   ");
		break;
	case 90:
		strcpy_s(character[index].CharacterIMG[7], "  �����ܡ������� /����  ��    ");
		break;
	case 94:
		strcpy_s(character[index].CharacterIMG[7], "  �����䡬������ /����  ��    ");
		break;
	case 96:
		strcpy_s(character[index].CharacterIMG[7], "  �������������� /����  ��    ");
		break;
	case 66:
		strcpy_s(character[index].CharacterIMG[4], "      ����  ��   ��           ");
		strcpy_s(character[index].CharacterIMG[5], "        ���Ϣ�������          ");
		strcpy_s(character[index].CharacterIMG[7], "        ���� �� ��            ");
		break;
	case 6666:
		strcpy_s(character[index].CharacterIMG[1], "      �����Ρ��Σ��Σ�        ");
		strcpy_s(character[index].CharacterIMG[2], "     �������� �Σ��Σ�        ");
		strcpy_s(character[index].CharacterIMG[3], "     ����_߲__�Σ��Σ�        ");
		strcpy_s(character[index].CharacterIMG[4], "      ����߲��   �Σ�         ");
		strcpy_s(character[index].CharacterIMG[5], "        �ݫϡݦ�  ��          ");
		strcpy_s(character[index].CharacterIMG[6], "       ��<..>��  ��           ");
		strcpy_s(character[index].CharacterIMG[7], "        ���� �� ��            ");
		strcpy_s(character[index].CharacterIMG[8], "   ����  ����   ��    �Σ�    ");
		strcpy_s(character[index].CharacterIMG[9], "   ��  ����     ������  ��    ");
		break;
	case 104:
		strcpy_s(character[index].CharacterIMG[4], "      ����  ��   ��           ");
		strcpy_s(character[index].CharacterIMG[5], "        ��Ϩ䦡����          ");
		strcpy_s(character[index].CharacterIMG[7], "        ��''\"�� ��            ");
		break;
	}

	CharacterDisplay(index, character);
}