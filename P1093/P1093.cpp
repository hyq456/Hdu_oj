// P1093.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int m;
	cin >> m;
	while (m!=0) {
		int n;
		cin >> n;
		int sum = 0;
		int a;
		while (n != 0) {
			cin >> a;
			sum += a;
			n--;			
		}
		cout << sum << endl;
		m--;
	}
	return 0;
}

