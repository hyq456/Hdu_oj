// P1092.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n && (n != 0)) {
		//cin >> n;
		int sum = 0;
		int a;
		for (int i = 0; i < n; i++) {
			cin >> a;
			sum = sum + a;
		}
		cout << sum << endl;
	}
    return 0;
}

