#pragma once
#include "game.h"

/********************************************************/
/* 实现武器类 */

Weapon::Weapon() // 构造函数
{
	_name = "赤手空拳";
	_power = 10;
}

Weapon::Weapon(string name, int power) //构造函数
	:_name(name), _power(power)
{
	if(_name != "赤手空拳")
	{
		cout << _name << "打造完毕..." << endl;
	}
}

Weapon::~Weapon()   // 析构函数
{
	if("赤手空拳" != _name)
	{
		cout << _name << "从此失传于江湖。" << endl;
	}
}
void Weapon::show()  // 显示武器属性
{
	cout << "武器：" << _name << "  威力：" << _power << endl;
}

/*******************************************************************/
/*******************************************************************/

/* 实现角色类 */

Actor::Actor()  //构造函数
{
	_name = "无名氏";
	_gender = true;
	//_weapon._name = "赤手空拳";
	//_weapon._power = 10;
	cout << _name << "出现！" << endl;
}

Actor::Actor(string name, bool gender, string weaponname, int power) // 构造函数
	:_name(name), _gender(gender), _weapon(weaponname, power)
{
	if("赤手空拳" != weaponname)
	{
		cout << _name << "带着" << weaponname << "出现了！" << endl;
	}

	else
	{
		cout << _name << "出现了，没有武器！" << endl; 
	}
}

Actor::Actor(const Actor & actor)  // 重载复制构造函数
{
	_name = actor._name + "之克隆";
	_gender = actor._gender;
	_weapon = actor._weapon;
	cout << _name << "出现！" << endl;
}


Actor::~Actor()  // 析构函数
{
	cout << _name << "隐退江湖。" << endl;
}

void Actor::operator~() // 重载单元运算符 " ~ "
{
	_name = "变化";
}

void Actor::operator+=(Weapon & weapon) //重载 "+=", 获得武器
{
	_weapon = weapon;
	cout << _name << "获得武器" << "\"" << weapon._name << "\"" << "!" << endl;
}

void Actor::operator+=(int addPower)  // 重载 "+=", 武器增加威力
{
	_weapon._power += addPower;
	cout << _name << "的武器" << "\"" << _weapon._name << "\"";
	cout << "威力增加" << addPower << "点!" << endl;
}

void Actor::showWeapon()
{
	_weapon.show();
}

void Actor::selfIntro()
{
	cout << "我是" << _name << "." << endl;
}

void Actor::say(string comtest)  //角色说话
{
	cout << _name << ":" << comtest << endl;
}

void Actor::setWeapon(Weapon & weapon)
{
	_weapon = weapon;
}

Weapon & Actor::getWeapon()
{
	Weapon & weapon = _weapon;
	return weapon;
}

string Actor::getName() const
{
	return _name;
}

string Actor::actorInfo()// 角色信息
{
	int power = _weapon._power;
	stringstream spower; // 数字转字符串, 用ss.str()接收;
	spower<<power;
	
	return "角色：" + _name + "(" + (_gender?"男":"女") + ")" + " 佩戴武器：" + _weapon._name + "(" + spower.str() + ")";
	
}

Actor::operator std::string() // 类型转换函数
{
	return actorInfo();
}

ostream & operator<<(ostream & os, Actor & actor) // 运算符 << 的重载函数
{
	os << actor.actorInfo();
	return os;
}

int Actor::weaponCompare(Weapon & w1, Weapon & w2) // 比较武器的威力
{
	if(w1._power > w2._power)
	{
		return 1;
	}

	else if(w1._power < w2._power)
	{
		return -1;
	}

	else if(w1._power == w2._power)
	{
		return 0;
	}
}

int Actor::actorCompare(Actor & actor1, Actor & actor2) // 比较两个角色的PK威力大小
{
	if( actor1.weaponCompare(actor1._weapon, actor2._weapon) == 1)
	{
		return 1;
	}

	else if(actor1.weaponCompare(actor1._weapon, actor2._weapon) == -1)
	{
		return -1;
	}

	else if(actor1.weaponCompare(actor1._weapon, actor2._weapon) == 0)
	{
		return 0;
	}
}





