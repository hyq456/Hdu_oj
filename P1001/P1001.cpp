// P1001.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int func(int i) {
	int sum = 0;
	for (int j = 1; j < i+1; j++) {
		sum += j;
	}
	return sum;
}

int main()
{
	int i;
	while (cin>>i)
	{
		cout << func(i) << endl << endl;
	}
    return 0;
}

