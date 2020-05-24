#include "Header.h"

void CharacterExpression(eCharacterName characterName, sCharacter* character, eCharacterExpression characterExpression)	//Battle���� ĳ������ ǥ�� ��ȭ
{
	switch (characterExpression)
	{
	case eCharacterExpression::PlayerNormal:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      �����ˡ��          ");
		break;
	case eCharacterExpression::PlayerDisappointed:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      ����᦬���          ");
		break;
	case eCharacterExpression::PlayerDamaged:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      ����᣾���          ");
		break;
	case eCharacterExpression::PlayerDead:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      ����᡿���          ");
		break;
	case eCharacterExpression::PlayerFatalKilled:
		strcpy_s(character[(int)characterName].CharacterIMG[1], "                              ");
		strcpy_s(character[(int)characterName].CharacterIMG[2], "                              ");
		strcpy_s(character[(int)characterName].CharacterIMG[3], "                              ");
		strcpy_s(character[(int)characterName].CharacterIMG[4], "                  ��          ");
		strcpy_s(character[(int)characterName].CharacterIMG[5], "        ���  ���            ");
		strcpy_s(character[(int)characterName].CharacterIMG[6], "      ��  ������          ");
		break;
	case eCharacterExpression::PlayerPowerUp:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      �����ڡ��          ");
		break;
	case eCharacterExpression::PlayerHealthUp:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      �����ܡ��          ");
		break;
	case eCharacterExpression::PlayerWhatThe:
		strcpy_s(character[(int)characterName].CharacterIMG[3], "      ���������          ");
		break;
	case eCharacterExpression::BillyGozarani:
		strcpy_s(character[(int)characterName].CharacterIMG[1], "         Ҭ  ������           ");
		strcpy_s(character[(int)characterName].CharacterIMG[2], "        �Σ���������Ҭ        ");
		strcpy_s(character[(int)characterName].CharacterIMG[6], "          ����������          ");
		break;
	case eCharacterExpression::BillyNormalDead:
		strcpy_s(character[(int)characterName].CharacterIMG[2], "        �Σ�����x�� Ҭ        ");
		strcpy_s(character[(int)characterName].CharacterIMG[6], "          �����ա���          ");
		break;
	case eCharacterExpression::BillyGozaDead:
		strcpy_s(character[(int)characterName].CharacterIMG[2], "        �Σ���������Ҭ        ");
		strcpy_s(character[(int)characterName].CharacterIMG[6], "          ����������          ");
		break;
	case eCharacterExpression::GrassHopperNormal:
		strcpy_s(character[(int)characterName].CharacterIMG[5], "   ���� ���ΥΡ�Ρ��ΡУ�_   ");
		break;	
	case eCharacterExpression::GrassHopperDamaged:
		strcpy_s(character[(int)characterName].CharacterIMG[5], "   ���� ���ΥΡ�Ρ��ΡУ�_   ");
		break;
	case eCharacterExpression::GrassHopperDead:
		strcpy_s(character[(int)characterName].CharacterIMG[5], "   ���� ���ΥΡ�Ρ��ΡУ�_   ");
		break;
	case eCharacterExpression::CamelCriketNormal:
		strcpy_s(character[(int)characterName].CharacterIMG[7], "  �����ܡ������� /����  ��    ");
		break;	
	case eCharacterExpression::CamelCriketDamaged:
		strcpy_s(character[(int)characterName].CharacterIMG[7], "  �������������� /����  ��    ");
		break;
	case eCharacterExpression::CamelCriketDead:
		strcpy_s(character[(int)characterName].CharacterIMG[7], "  �����䡬������ /����  ��    ");
		break;
	case eCharacterExpression::GandhiPissedOff:
		strcpy_s(character[(int)characterName].CharacterIMG[4], "      ����  ��   ��           ");
		strcpy_s(character[(int)characterName].CharacterIMG[5], "        ���Ϣ�������          ");
		strcpy_s(character[(int)characterName].CharacterIMG[7], "        ���� �� ��            ");
		break;
	case eCharacterExpression::GandhiSuperSaiyan:
		strcpy_s(character[(int)characterName].CharacterIMG[1], "      �����Ρ��Σ��Σ�        ");
		strcpy_s(character[(int)characterName].CharacterIMG[2], "     �������� �Σ��Σ�        ");
		strcpy_s(character[(int)characterName].CharacterIMG[3], "     ����_߲__�Σ��Σ�        ");
		strcpy_s(character[(int)characterName].CharacterIMG[4], "      ����߲��   �Σ�         ");
		strcpy_s(character[(int)characterName].CharacterIMG[5], "        �ݫϡݦ�  ��          ");
		strcpy_s(character[(int)characterName].CharacterIMG[6], "       ��<..>��  ��           ");
		strcpy_s(character[(int)characterName].CharacterIMG[7], "        ���� �� ��            ");
		strcpy_s(character[(int)characterName].CharacterIMG[8], "   ����  ����   ��    �Σ�    ");
		strcpy_s(character[(int)characterName].CharacterIMG[9], "   ��  ����     ������  ��    ");
		break;
	case eCharacterExpression::GandhiDead:
		strcpy_s(character[(int)characterName].CharacterIMG[4], "      ����  ��   ��           ");
		strcpy_s(character[(int)characterName].CharacterIMG[5], "        ��Ϩ䦡����          ");
		strcpy_s(character[(int)characterName].CharacterIMG[7], "        ��''\"�� ��            ");
		break;
	}

	CharacterDisplay(characterName, character);
}