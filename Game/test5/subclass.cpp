#pragma once
#include "game.h"

/********************************************************/
//Monk���ʵ��

Monk::Monk()  // ���캯��
{
	_name = "����ʽ";
	_monkName = "��";
	_gender = true;

	cout << "����" << _name << "����," << "�޷��ţ�" <<endl;
}

Monk::Monk(string name, bool gender, string monkName, string weaponname, int power)  // ���캯��
	:Actor(name, gender, weaponname, power), _monkName(monkName)
{
	cout << "����" << _name << "����, " << "����" << "\"" << _monkName << "\"" << "!" << endl;
}

Monk::~Monk()
{
	cout << "�����ӷ�ƶɮȥҲ..." << endl;
}

void Monk::patter()
{
	cout << _name << ":�����ذ����..." << endl;
}

void Monk::selfIntro()
{
	cout << "�����ӷ�ƶɮ" << _name << ", ����" << "\"" << _monkName << "\"" << "." << endl; 
}

/**********************************************************/

/******************************************************************/
//Monster���ʵ��

Monster::Monster()
{
	_name = "��������";
	_place = "��������";
	_gender = true;
	cout << "�����������������ֳ��֣�" << endl;
}
Monster::Monster(string name, bool gender, string place, string weaponname, int power)
	:Actor(name, gender, weaponname, power), _place(place)
{
	cout << "����" << _name << "����...����" << _place << endl;
}

void Monster::selfIntro()
{
	cout << "����" << _place << _name << "��Ҳ!" << endl;
}

void Monster::eat(Actor * food)
{
	cout << _name << "�Ե�" << food->getName() << "..." << endl;

	delete food;
	food = 0;
}

/***************************************************************/
// NativeMonster��ʵ��

NativeMonster::NativeMonster() // ���캯��
{
	_name = "��������";
	_gender = true;
	_place = "��������";
	_years = 0; 

	cout << "�������ֳ���..." << endl;
}

NativeMonster::NativeMonster(string name, bool gender, string place, string weaponname, int power, long years)
	:Monster(name, gender, place, weaponname, power), _years(years)
{
	cout << "����" << _name << "����..." << "����" << _place << endl;
}

/***********************************************************************************************************/
// ExoticMonster��ʵ��

ExoticMonster::ExoticMonster() // ���캯��
{
	_name = "��������";
	_gender = true;
	_place = "��������";
	_background = "��������"; 

	cout << "�������ֳ���..." << endl;
}

ExoticMonster::ExoticMonster(string name, bool gender, string place, string weaponname, int power, string background)
	:Monster(name, gender, place, weaponname, power), _background(background)
{
	cout << "����" << _name << "����..." << "����" << _place << endl;
}

/************************************************************************/

/**********************************************************************************/
// ʵ������God��
God::God()
{
	_name = "��������";
	_gender = true;

	cout << "����" << _name << "������..." << endl;
}

God::God(string name, bool gender, string weaponname, int power)
	:Actor(name, gender, weaponname, power)
{
	cout << "����" << _name << "������..." << endl;	
}

void God::fly()
{
	say("��ѽ��ѽ��...");
}

/****************************************************************************/

/**************************************************************************/
// �� Buddha ��ʵ��
Buddha::Buddha()
{
	Monk::_name = "������";
	Monk::_gender = true;
	God::_name = "����";
	God::_gender = true;
}

Buddha::Buddha(string name, bool gender, string monkName, string weaponname, int power)
	:Actor(name, gender, weaponname, power), Monk(name, gender, monkName, weaponname), God(name, gender, weaponname, power)
{
}