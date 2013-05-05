#pragma once
#include "game.h"

/********************************************************/
/* ʵ�������� */

Weapon::Weapon() // ���캯��
{
	_name = "���ֿ�ȭ";
	_power = 10;
}

Weapon::Weapon(string name, int power) //���캯��
	:_name(name), _power(power)
{
	if(_name != "���ֿ�ȭ")
	{
		cout << _name << "�������..." << endl;
	}
}

Weapon::~Weapon()   // ��������
{
	if("���ֿ�ȭ" != _name)
	{
		cout << _name << "�Ӵ�ʧ���ڽ�����" << endl;
	}
}
void Weapon::show()  // ��ʾ��������
{
	cout << "������" << _name << "  ������" << _power << endl;
}

/*******************************************************************/
/*******************************************************************/

/* ʵ�ֽ�ɫ�� */

Actor::Actor()  //���캯��
{
	_name = "������";
	_gender = true;
	//_weapon._name = "���ֿ�ȭ";
	//_weapon._power = 10;
	cout << _name << "���֣�" << endl;
}

Actor::Actor(string name, bool gender, string weaponname, int power) // ���캯��
	:_name(name), _gender(gender), _weapon(weaponname, power)
{
	if("���ֿ�ȭ" != weaponname)
	{
		cout << _name << "����" << weaponname << "�����ˣ�" << endl;
	}

	else
	{
		cout << _name << "�����ˣ�û��������" << endl; 
	}
}

Actor::Actor(const Actor & actor)  // ���ظ��ƹ��캯��
{
	_name = actor._name + "֮��¡";
	_gender = actor._gender;
	_weapon = actor._weapon;
	cout << _name << "���֣�" << endl;
}


Actor::~Actor()  // ��������
{
	cout << _name << "���˽�����" << endl;
}

void Actor::operator~() // ���ص�Ԫ����� " ~ "
{
	_name = "�仯";
}

void Actor::operator+=(Weapon & weapon) //���� "+=", �������
{
	_weapon = weapon;
	cout << _name << "�������" << "\"" << weapon._name << "\"" << "!" << endl;
}

void Actor::operator+=(int addPower)  // ���� "+=", ������������
{
	_weapon._power += addPower;
	cout << _name << "������" << "\"" << _weapon._name << "\"";
	cout << "��������" << addPower << "��!" << endl;
}

void Actor::showWeapon()
{
	_weapon.show();
}

void Actor::selfIntro()
{
	cout << "����" << _name << "." << endl;
}

void Actor::say(string comtest)  //��ɫ˵��
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

string Actor::actorInfo()// ��ɫ��Ϣ
{
	int power = _weapon._power;
	stringstream spower; // ����ת�ַ���, ��ss.str()����;
	spower<<power;
	
	return "��ɫ��" + _name + "(" + (_gender?"��":"Ů") + ")" + " ���������" + _weapon._name + "(" + spower.str() + ")";
	
}

Actor::operator std::string() // ����ת������
{
	return actorInfo();
}

ostream & operator<<(ostream & os, Actor & actor) // ����� << �����غ���
{
	os << actor.actorInfo();
	return os;
}

int Actor::weaponCompare(Weapon & w1, Weapon & w2) // �Ƚ�����������
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

int Actor::actorCompare(Actor & actor1, Actor & actor2) // �Ƚ�������ɫ��PK������С
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





