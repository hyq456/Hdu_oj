// P1096.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int m;
	cin >> m;
	for (int i = 0; i < m;) {
		int n, a, sum = 0;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> a;
			sum += a;
		}
		cout << sum << endl;
		if (++i < m) {
			cout << endl;
		}
	}
	return 0;
}



