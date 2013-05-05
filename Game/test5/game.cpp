#pragma once
#include "game.h"

#define N 20
/******************************************************************/

ostream & operator<<(ostream & os, Actor & actor); // 全局的操作符重载函数 

template <typename T>
void printRecord(T i)
{
	cout << i << " ";
}

int main()
{
	srand( ( (unsigned)time(0) ) );

/************************************************************************/
// 容器
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
	//cout << "－－－－《西游记》开始－－－－－－" << endl;

	//try
	//{
	//	Loop();
	//	cout << "师徒四人取经成功，游戏结束！" << endl;
	//}

	//catch(string & s)
	//{
	//	cout  << "师徒四人取经失败，" + s << endl;
	//}

	//cout << endl;
	//cout << "游戏结束！" << endl << endl;
/************************************************************/

/*************************************************************/
//文件流

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

	//	in.read((char*)&pt, sizeof(Point)); // 若读取失败返回EOF			

	//	cout << in.rdstate() << endl;
	//	if(!in)
	//		break;
	//	
	//	cout << pt.no << ": " << pt.x << ", " << pt.y << endl;
	//}

	//以上是文件流
/****************************************************************/

/*******************************************************************/
	// enum 型数据，不能用0，1，2，代替，虽然他们的值是0，1，2

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
	//		 output = laborer;  //不能用0，1，2
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

	//以上是enum 型数据测试
/************************************************************************************/
	
	return 0;
}