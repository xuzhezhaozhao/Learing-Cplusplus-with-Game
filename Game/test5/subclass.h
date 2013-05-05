#pragma once
#ifndef	_SUBCLASS_H_
#define _SUBCLASS_H_

/***************************************************************************/
// ��ĺ���
class Monk : public virtual Actor
{
protected:
	string _monkName; // ����

public:
	Monk();
	Monk(string name, bool gender = true, string _monkName = "�޷���", string weaponname = "���ֿ�ȭ", int power = 10);
	~Monk();

	void patter();   //�
	void selfIntro();
	
};

/*******************************************************************************/

/*****************************************************************************/
// ����

class Monster : public virtual Actor
{
protected:
	string _place; // ס��

public:
	Monster();
	Monster(string name, bool gender = true, string place = "��������", string weaponname = "���ֿ�ȭ", int power = 10);

	void selfIntro();
	void eat(Actor *food);
};
/***************************************************/
class NativeMonster : public Monster // ��������
{
private:
	long _years; // ����ʱ��

public:
	NativeMonster();
	NativeMonster(string name, bool gender = true, string place = "��������", string weaponname = "���ֿ�ȭ", int power = 10, long years = 100);
};

/*******************************************************/
class ExoticMonster : public Monster  // �б���������
{
private:
	string _background; // ����

public:
	ExoticMonster();
	ExoticMonster(string name, bool gender = true, string place = "��������", string weaponname = "���ֿ�ȭ", int power = 10, string background = "��������");
};
/*************************************************************************************************************************************/

/******************************************************************************************************/
// ���� God 
class God : public virtual Actor
{
public:
	God();
	God(string name, bool gender = true, string weaponname = "���ֿ�ȭ", int power = 10);

	void fly();
};

/****************************************************************************************************/
// �� Buddla
class Buddha : public Monk, public God
{
public:
	Buddha();
	Buddha(string name, bool gender = true, string monkName = "�޷���", string weaponname = "���ֿ�ȭ", int power = 10);
};

/*****************************************************************************************************/
#endif