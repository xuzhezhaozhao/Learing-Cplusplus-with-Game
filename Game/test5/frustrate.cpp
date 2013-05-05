#pragma once
#include "game.h"

void Capture() //唐僧被抓
{
	cout << "唐僧被妖怪抓了！" << endl;
}

bool Save()  //救唐僧
{
	int r = rand();

	if(r < 15000)
		return true;

	if(r > 32500)
		throw string("唐长老被妖怪吃了！");  //抛出异常后程序直接跳到catch语句执行

	if(r > 32400)
		throw string("唐长老结婚了！");

	return false;
}

void Play(int level)  // 每一关
{
	cout << endl;
	cout << "－－－－第" << level << "难开始－－－－－－" << endl;
	Capture();

	int retries = 0;
	bool save;

	while(true)
	{
		retries++;
		cout << "救唐僧，第" << retries << "次..." << endl;
		save = Save();

		if(save)
			break;
	}

	cout << "成功救出唐僧！" << endl;
	cout << "－－－－第" << level << "难结束－－－－－－" << endl;

}

void Loop()  // 如来设置81难
{
	int i;
	for(i=1; i<=81; i++)
	{
		Play(i);
	}
}