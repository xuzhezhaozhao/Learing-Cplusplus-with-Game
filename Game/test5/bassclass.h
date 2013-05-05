#pragma once
#ifndef _BASSCLASS_H_
#define _BASSCLASS_H_

class Actor;

class Weapon  // ���������
{
protected:
	string _name;
	int _power;

public:
	Weapon();
	Weapon(string name, int power = 10);
	virtual ~Weapon();
	void show();
	friend class Actor;
};

class Actor  //��ƽ�ɫ��
{
protected:
	string _name;
	bool _gender;
	Weapon _weapon;

public:
	Actor();
	Actor(string name, bool gender = true, string weaponname = "���ֿ�ȭ", int power = 10);
	Actor(const Actor & actor);
	virtual ~Actor();

	void operator~();                 //�仯
	void operator+=(Weapon & weapon); //������
	void operator+=(int addPower);   //����������
	//friend ostream & operator<<(ostream & os, Actor & actor);

	void setWeapon(Weapon & weapon);
	void showWeapon();
	virtual void selfIntro();
	virtual void say(string comtext);
	Weapon & getWeapon();
	string getName() const;
	string actorInfo();
	int weaponCompare(Weapon & w1, Weapon & w2);
	int actorCompare(Actor & actor1, Actor & actor2);

	operator string();  // ����ת������
};

#endif