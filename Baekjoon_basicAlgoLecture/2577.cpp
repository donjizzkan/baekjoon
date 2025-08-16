#include "problems.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve2577() {
	int a, b, c;
	vector<int> cnt(10,0);
	cin >> a >> b >> c;
	long long cal = a * b * c;
	string num = to_string(cal);
	for (int i = 0; i < num.size(); i++) {
		cnt[num[i] - '0']++;
	}
	for (int i = 0; i < 10; i++)
		cout << cnt[i] << endl;
}