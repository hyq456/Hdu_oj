// P2002.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
#define PI 3.1415927
int main()
{
	double r;
	while (cin>>r)
	{
		cout << fixed << setprecision(3) << 4.0 / 3 * PI*pow(r, 3) << endl;
	}
}


