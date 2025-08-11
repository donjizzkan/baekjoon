#include "problems.h"
#include <iostream>
using namespace std;

void solve10093() {
	long long a, b, big, small, cnt;
	cin >> a >> b;
	if (a > b) {
		big = a;
		small = b;
	}
	else {
		big = b;
		small = a;
	}
	cnt = big - small - 1;
	if (cnt < 0)
		cnt = 0;
	cout << cnt << endl;
	for (long long i = small + 1; i < big; i++)
		cout << i << " ";
		
}