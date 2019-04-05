// P2001.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main()
{
	double x1, y1, x2, y2;
	double result;
	while (cin>>x1>>y1>>x2>>y2)
	{
		cout <<fixed<< setprecision(2)<< sqrt(abs(pow(x2 - x1, 2) + pow(y2 - y1, 2))) << endl;
	}
}

