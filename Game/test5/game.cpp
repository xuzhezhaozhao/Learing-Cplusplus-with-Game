#pragma once
#include "game.h"

#define N 20
/******************************************************************/

ostream & operator<<(ostream & os, Actor & actor); // ȫ�ֵĲ��������غ��� 

template <typename T>
void printRecord(T i)
{
	cout << i << " ";
}

int main()
{
	srand( ( (unsigned)time(0) ) );

/************************************************************************/
// ����
	//vector<double> records;

	//for(int i = 0; i<N; i++)
	//{
	//	records.push_back(rand() % 100);
	//}

	//for_each(records.begin(), records.end(), printRecord<double>);
	//cout << endl;

	//sort(records.begin(), records.end(), greater<double>());
	//for_each(records.begin(), records.end(), printRecord<double>);

	//cout << endl;
/***********************************************************************/


/***********************************************************/
	//cout << "�������������μǡ���ʼ������������" << endl;

	//try
	//{
	//	Loop();
	//	cout << "ʦͽ����ȡ���ɹ�����Ϸ������" << endl;
	//}

	//catch(string & s)
	//{
	//	cout  << "ʦͽ����ȡ��ʧ�ܣ�" + s << endl;
	//}

	//cout << endl;
	//cout << "��Ϸ������" << endl << endl;
/************************************************************/

/*************************************************************/
//�ļ���

	//struct Point
	//{
	//	int no;
	//	int x;
	//	int y;
	//};

	//ofstream out;
	//out.open("d:/point.info", ios::out | ios::binary);

	//Point pt;

	//for(int i=0; i<5; i++)
	//{
	//	pt.no = i;
	//	pt.x = 100 * i;
	//	pt.y = pt.x + 80;

	//	out.write((char*)&pt, sizeof(Point));
	//}

	//out.close();

	//ifstream in;
	//in.open("d:/point.info", ios::in | ios::binary);

	//while(true)
	//{

	//	in.read((char*)&pt, sizeof(Point)); // ����ȡʧ�ܷ���EOF			

	//	cout << in.rdstate() << endl;
	//	if(!in)
	//		break;
	//	
	//	cout << pt.no << ": " << pt.x << ", " << pt.y << endl;
	//}

	//�������ļ���
/****************************************************************/

/*******************************************************************/
	// enum �����ݣ�������0��1��2�����棬��Ȼ���ǵ�ֵ��0��1��2

	//enum type {
	//	laborer,
	//	secretary,
	//	manager
	//};

	//char input;
	//type output;

	//cout << "Enter employee type:";
	//cin >> input;

	//switch (input)
	//{

	//	case 'l':
	//		 output = laborer;  //������0��1��2
	//		 break;
	//	case 's':
	//		 output = secretary ;
	//		 break;
	//	case 'm':
	//		 output = manager;
	//		 break;
	//}

	//switch(output)
	//{
	//	case laborer:
	//		cout <<"Employee type is laborer " << endl;
	//		break;
	//	case secretary:
	//		cout <<"Employee type is secretary " << endl;
	//		break;
	//	case manager:
	//		 cout <<"Employee type is manager " << endl;
	//		 break;
	//}

	//������enum �����ݲ���
/************************************************************************************/
	
	return 0;
}