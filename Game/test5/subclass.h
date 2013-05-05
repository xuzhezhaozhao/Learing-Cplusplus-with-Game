#pragma once
#ifndef	_SUBCLASS_H_
#define _SUBCLASS_H_

/***************************************************************************/
// 念经的和尚
class Monk : public virtual Actor
{
protected:
	string _monkName; // 法名

public:
	Monk();
	Monk(string name, bool gender = true, string _monkName = "无法号", string weaponname = "赤手空拳", int power = 10);
	~Monk();

	void patter();   //念经
	void selfIntro();
	
};

/*******************************************************************************/

/*****************************************************************************/
// 妖怪

class Monster : public virtual Actor
{
protected:
	string _place; // 住所

public:
	Monster();
	Monster(string name, bool gender = true, string place = "来历不明", string weaponname = "赤手空拳", int power = 10);

	void selfIntro();
	void eat(Actor *food);
};
/***************************************************/
class NativeMonster : public Monster // 本地妖怪
{
private:
	long _years; // 修行时间

public:
	NativeMonster();
	NativeMonster(string name, bool gender = true, string place = "来历不明", string weaponname = "赤手空拳", int power = 10, long years = 100);
};

/*******************************************************/
class ExoticMonster : public Monster  // 有背景的妖怪
{
private:
	string _background; // 背景

public:
	ExoticMonster();
	ExoticMonster(string name, bool gender = true, string place = "来历不明", string weaponname = "赤手空拳", int power = 10, string background = "背景不明");
};
/*************************************************************************************************************************************/

/******************************************************************************************************/
// 神仙 God 
class God : public virtual Actor
{
public:
	God();
	God(string name, bool gender = true, string weaponname = "赤手空拳", int power = 10);

	void fly();
};

/****************************************************************************************************/
// 佛 Buddla
class Buddha : public Monk, public God
{
public:
	Buddha();
	Buddha(string name, bool gender = true, string monkName = "无法号", string weaponname = "赤手空拳", int power = 10);
};

/*****************************************************************************************************/
#endif