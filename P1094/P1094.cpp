// P1094.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int n;
	while (cin >> n) {
		int sum = 0;
		int a;
		for (int i = 0; i < n; i++) {
			cin >> a;
			sum += a;
		}
		cout << sum << endl;
	}
}
