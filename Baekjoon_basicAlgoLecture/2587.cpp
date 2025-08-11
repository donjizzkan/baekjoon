#include "problems.h"
#include <iostream>
#include <vector>
using namespace std;

void solve2587() {
	vector<int> num(5);
	int sum = 0, avg, mid;
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		sum += num[i];
	}
	avg = sum / 5;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5 - 1 - i; j++) {		//bubble sort
			if (num[j] > num[j + 1])
				swap(num[j], num[j + 1]);
		}
	}
	mid = num[2];
	cout << avg << endl << mid;
}