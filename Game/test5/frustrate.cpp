#pragma once
#include "game.h"

void Capture() //��ɮ��ץ
{
	cout << "��ɮ������ץ�ˣ�" << endl;
}

bool Save()  //����ɮ
{
	int r = rand();

	if(r < 15000)
		return true;

	if(r > 32500)
		throw string("�Ƴ��ϱ����ֳ��ˣ�");  //�׳��쳣�����ֱ������catch���ִ��

	if(r > 32400)
		throw string("�Ƴ��Ͻ���ˣ�");

	return false;
}

void Play(int level)  // ÿһ��
{
	cout << endl;
	cout << "����������" << level << "�ѿ�ʼ������������" << endl;
	Capture();

	int retries = 0;
	bool save;

	while(true)
	{
		retries++;
		cout << "����ɮ����" << retries << "��..." << endl;
		save = Save();

		if(save)
			break;
	}

	cout << "�ɹ��ȳ���ɮ��" << endl;
	cout << "����������" << level << "�ѽ���������������" << endl;

}

void Loop()  // ��������81��
{
	int i;
	for(i=1; i<=81; i++)
	{
		Play(i);
	}
}