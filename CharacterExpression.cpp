#include"Header.h"

void CharacterExpression(int index, sCharacter* character, int WhatExpression)	//Battle���� ĳ������ ǥ�� ��ȭ
{
	switch(WhatExpression)
	{
	case 0:
		strcpy(character[index].CharacterIMG[3], "      �����ˡ��          ");
		break;
	case 1:
		strcpy(character[index].CharacterIMG[3], "      ����᦬���          ");
		break;
	case 4:
		strcpy(character[index].CharacterIMG[3], "      ����᣾���          ");
		break;
	case 444:
		strcpy(character[index].CharacterIMG[3], "      ����᡿���          ");
		break;
	case 4444:
		strcpy(character[index].CharacterIMG[1], "                              ");
		strcpy(character[index].CharacterIMG[2], "                              ");
		strcpy(character[index].CharacterIMG[3], "                              ");
		strcpy(character[index].CharacterIMG[4], "                  ��          ");
		strcpy(character[index].CharacterIMG[5], "        ���  ���            ");
		strcpy(character[index].CharacterIMG[6], "      ��  ������          ");
		break;
	case 9:
		strcpy(character[index].CharacterIMG[3], "      �����ڡ��          ");
		break;
	case 10:
		strcpy(character[index].CharacterIMG[3], "      �����ܡ��          ");
		break;
	case 14:
		strcpy(character[index].CharacterIMG[3], "      ���������          ");
		break;
	case 18:
		strcpy(character[index].CharacterIMG[1], "         ��  ������           ");
		strcpy(character[index].CharacterIMG[2], "        �Σ�����������        ");
		strcpy(character[index].CharacterIMG[6], "          ����������          ");
		break;
	case 84:
		strcpy(character[index].CharacterIMG[2], "        �Σ�����x�� ��        ");
		strcpy(character[index].CharacterIMG[6], "          �����ա���          ");
		break;
	case 218:
		strcpy(character[index].CharacterIMG[2], "        �Σ�����������        ");
		strcpy(character[index].CharacterIMG[6], "          ����������          ");
		break;
	case 50:
		strcpy(character[index].CharacterIMG[5], "   ���� ���ΥΡ�Ρ��ΡУ�_   ");
		break;
	case 54:
		strcpy(character[index].CharacterIMG[5], "   ���� ���ΥΡ�Ρ��ΡУ�_   ");
		break;
	case 56:
		strcpy(character[index].CharacterIMG[5], "   ���� ���ΥΡ�Ρ��ΡУ�_   ");
		break;
	case 90:
		strcpy(character[index].CharacterIMG[7], "  �����ܡ������� /����  ��    ");
		break;
	case 94:
		strcpy(character[index].CharacterIMG[7], "  �����䡬������ /����  ��    ");
		break;
	case 96:
		strcpy(character[index].CharacterIMG[7], "  �������������� /����  ��    ");
		break;
	case 69:
		strcpy(character[index].CharacterIMG[4], "      ����  ��   ��           ");
		strcpy(character[index].CharacterIMG[5], "        ���Ϣ�������          ");
		strcpy(character[index].CharacterIMG[7], "        ���� �� ��            ");
		break;
	case 6969:
		strcpy(character[index].CharacterIMG[1], "      �����Ρ��Σ��Σ�        ");
		strcpy(character[index].CharacterIMG[2], "     �������� �Σ��Σ�        ");
		strcpy(character[index].CharacterIMG[3], "     ����_߲__�Σ��Σ�        ");
		strcpy(character[index].CharacterIMG[4], "      ����߲��   �Σ�         ");
		strcpy(character[index].CharacterIMG[5], "        �ݫϡݦ�  ��          ");
		strcpy(character[index].CharacterIMG[6], "       ��<..>��  ��           ");
		strcpy(character[index].CharacterIMG[7], "        ���� �� ��            ");
		strcpy(character[index].CharacterIMG[8], "   ����  ����   ��    �Σ�    ");
		strcpy(character[index].CharacterIMG[9], "   ��  ����     ������  ��    ");
		break;
	case 104:
		strcpy(character[index].CharacterIMG[4], "      ����  ��   ��           ");
		strcpy(character[index].CharacterIMG[5], "        ��Ϩ䦡����          ");
		strcpy(character[index].CharacterIMG[7], "        ��''\"�� ��            ");
		break;
	}

	CharacterDisplay(index, character);
}