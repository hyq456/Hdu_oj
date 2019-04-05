// P2000.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	char a, b, c;
	while (cin>>a>>b>>c)
	{
		if (a > b) {
			if (b > c) { // c < b < a
				cout << c << ' ' << b << ' ' << a << endl;
			}
			else 
			{
				if(a>c)//b < c < a
					cout << b << ' ' << c << ' ' << a << endl;
				else //b < a < c
					cout << b << ' ' << a << ' ' << c << endl;

			}
		}
		else { // a < b
			if (b < c) { // a < b < c
				cout << a << ' ' << b << ' ' << c << endl;
			}
			else {
				if(a > c)// c < a < b
					cout << c << ' ' << a << ' ' << b << endl;
				else
					cout << a << ' ' << c << ' ' << b << endl;

			}
		}
			
	}
}


