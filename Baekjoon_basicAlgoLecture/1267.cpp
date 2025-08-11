#include "problems.h"
#include <iostream>
#include <vector>
using namespace std;

void solve1267() {
	int N;
	int payofY = 0, payofM = 0;
	cin >> N;
	vector<int> A(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
		payofY += ((A[i] / 30) + 1) * 10;
		payofM += ((A[i] / 60) + 1) * 15;
	}
	if (payofY > payofM)
		cout << "M " << payofM;
	else if (payofM > payofY)
		cout << "Y " << payofY;
	else
		cout << "Y M " << payofM;
}