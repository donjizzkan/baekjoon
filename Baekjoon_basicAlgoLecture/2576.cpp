#include <iostream>
#include <vector>
#include "problems.h"
using namespace std;

void solve2576() {
	vector<int> num(7);
	int sum = 0, min = 100, cnt = 0;
	for (int i = 0; i < 7; i++) {
		cin >> num[i];
		if (num[i] % 2 == 1) {
			sum += num[i];
			cnt++;
			if (num[i] < min)
				min = num[i];
		}
	}
	if (cnt == 0)
		cout << "-1";
	else
		cout << sum << "\n" << min;

}