// 2005.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while (cin>>s)
	{
		int y, m, d;
		int p,q;
		int flag = 0;
		//int days = 0;
		p = s.find('/');
		y = stoi(s.substr(0,p));
		q = s.find('/', p+1);
		m = stoi(s.substr(p+1, q-p-1));	
		d = stoi(s.substr(q + 1));
		//cout << y << endl << m << endl << d << endl;
		if ((y%4 == 0&&y%100!=0)||y%400==0)
		{
			flag = 1;
		}
		//cout << flag << endl;
		switch (m)
		{
		case 12:
			d += 30;
		case 11:
			d += 31;
		case 10:
			d += 30;
		case 9:
			d += 31;
		case 8:
			d += 31;
		case 7:
			d += 30;
		case 6:
			d += 31;
		case 5:
			d += 30;
		case 4:
			d += 31;
		case 3:
			if (flag == 0)
				d += 28;
			else
				d += 29;
		case 2:
			d += 31;

		}
		cout << d << endl;
	}
}

