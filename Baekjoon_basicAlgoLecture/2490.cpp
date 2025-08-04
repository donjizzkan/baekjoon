#include <iostream>
#include <vector>
#include "problems.h"
using namespace std;

void solve2490() {
	vector<int> yoot(4), yoot1(4), yoot2(4);
	int cnt = 0, cnt1 = 0, cnt2 = 0;
	cin >> yoot[0] >> yoot[1] >> yoot[2] >> yoot[3];
	cin >> yoot1[0] >> yoot1[1] >> yoot1[2] >> yoot1[3];
	cin >> yoot2[0] >> yoot2[1] >> yoot2[2] >> yoot2[3];
	for (int i = 0; i < 4; i++) {
		if (yoot[i] == 0)
			cnt++;
		if (yoot1[i] == 0)
			cnt1++;
		if (yoot2[i] == 0)
			cnt2++;
	}
	if (cnt == 1)
		cout << "A\n";
	else if (cnt == 2)
		cout << "B\n";
	else if (cnt == 3)
		cout << "C\n";
	else if (cnt == 4)
		cout << "D\n";
	else
		cout << "E\n";

	if (cnt1 == 1)
		cout << "A\n";
	else if (cnt1 == 2)
		cout << "B\n";
	else if (cnt1 == 3)
		cout << "C\n";
	else if (cnt1 == 4)
		cout << "D\n";
	else
		cout << "E\n";

	if (cnt2 == 1)
		cout << "A\n";
	else if (cnt2 == 2)
		cout << "B\n";
	else if (cnt2 == 3)
		cout << "C\n";
	else if (cnt2 == 4)
		cout << "D\n";
	else
		cout << "E\n";
}