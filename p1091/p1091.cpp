// p1091.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a >> b) {
		if (a != 0 || b != 0) {
			cout << a + b << endl;
		}
		else
		{
			continue;
		}
	}
	return 0;
}

