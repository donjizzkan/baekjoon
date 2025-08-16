#include "problems.h"
#include <iostream>
#include <vector>
using namespace std;

void solve1475() {
	string num;
	int big = 0, location;
	vector<int> cnt(9, 0);
	cin >> num;
	for (int i = 0; i < num.size(); i++) {
		if ((num[i] - '0') == 9)
			cnt[6]++;
		else
			cnt[num[i] - '0']++;
	}
	if ((cnt[6] % 2) == 1)
		cnt[6] = cnt[6] / 2 + 1;
	else
		cnt[6] = cnt[6] / 2;

	for (int i = 0; i < 9; i++) {
		if (cnt[i] > big) {
			big = cnt[i];
			location = i;
		}
	}

	cout << big;
}