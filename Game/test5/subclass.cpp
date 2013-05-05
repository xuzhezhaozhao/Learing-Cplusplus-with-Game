#pragma once
#include "game.h"

/********************************************************/
//Monk类的实现

Monk::Monk()  // 构造函数
{
	_name = "无名式";
	_monkName = "无";
	_gender = true;

	cout << "和尚" << _name << "出现," << "无法号！" <<endl;
}

Monk::Monk(string name, bool gender, string monkName, string weaponname, int power)  // 构造函数
	:Actor(name, gender, weaponname, power), _monkName(monkName)
{
	cout << "和尚" << _name << "出现, " << "法号" << "\"" << _monkName << "\"" << "!" << endl;
}

Monk::~Monk()
{
	cout << "阿弥陀佛，贫僧去也..." << endl;
}

void Monk::patter()
{
	cout << _name << ":唵嘛呢叭咪吽..." << endl;
}

void Monk::selfIntro()
{
	cout << "阿弥陀佛，贫僧" << _name << ", 法号" << "\"" << _monkName << "\"" << "." << endl; 
}

/**********************************************************/

/******************************************************************/
//Monster类的实现

Monster::Monster()
{
	_name = "无名妖怪";
	_place = "来历不明";
	_gender = true;
	cout << "来历不明的无名妖怪出现！" << endl;
}
Monster::Monster(string name, bool gender, string place, string weaponname, int power)
	:Actor(name, gender, weaponname, power), _place(place)
{
	cout << "妖怪" << _name << "出现...来自" << _place << endl;
}

void Monster::selfIntro()
{
	cout << "我乃" << _place << _name << "是也!" << endl;
}

void Monster::eat(Actor * food)
{
	cout << _name << "吃掉" << food->getName() << "..." << endl;

	delete food;
	food = 0;
}

/***************************************************************/
// NativeMonster类实现

NativeMonster::NativeMonster() // 构造函数
{
	_name = "无名妖怪";
	_gender = true;
	_place = "来历不明";
	_years = 0; 

	cout << "无名妖怪出现..." << endl;
}

NativeMonster::NativeMonster(string name, bool gender, string place, string weaponname, int power, long years)
	:Monster(name, gender, place, weaponname, power), _years(years)
{
	cout << "妖怪" << _name << "出现..." << "来自" << _place << endl;
}

/***********************************************************************************************************/
// ExoticMonster类实现

ExoticMonster::ExoticMonster() // 构造函数
{
	_name = "无名妖怪";
	_gender = true;
	_place = "来历不明";
	_background = "背景不明"; 

	cout << "无名妖怪出现..." << endl;
}

ExoticMonster::ExoticMonster(string name, bool gender, string place, string weaponname, int power, string background)
	:Monster(name, gender, place, weaponname, power), _background(background)
{
	cout << "妖怪" << _name << "出现..." << "来自" << _place << endl;
}

/************************************************************************/

/**********************************************************************************/
// 实现神仙God类
God::God()
{
	_name = "无名神仙";
	_gender = true;

	cout << "神仙" << _name << "出现了..." << endl;
}

God::God(string name, bool gender, string weaponname, int power)
	:Actor(name, gender, weaponname, power)
{
	cout << "神仙" << _name << "出现了..." << endl;	
}

void God::fly()
{
	say("飞呀飞呀飞...");
}

/****************************************************************************/

/**************************************************************************/
// 佛 Buddha 的实现
Buddha::Buddha()
{
	Monk::_name = "无名佛";
	Monk::_gender = true;
	God::_name = "无名";
	God::_gender = true;
}

Buddha::Buddha(string name, bool gender, string monkName, string weaponname, int power)
	:Actor(name, gender, weaponname, power), Monk(name, gender, monkName, weaponname), God(name, gender, weaponname, power)
{
}