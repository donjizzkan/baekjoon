#include "problems.h"
#include <iostream>
#include <vector>
using namespace std;
void solve10807() {
	int N, V, cnt = 0;
	cin >> N;
	vector<int> num(N);
	for (int i = 0; i < N; i++)
		cin >> num[i];
	cin >> V;
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			if (num[j] > num[j + 1])
				swap(num[j], num[j + 1]);
		}
	}
	for (int i = 0; i < N; i++) {
		if (num[i] == V)
			cnt++;
		if (num[i] > V)
			break;
	}
	cout << cnt;
}