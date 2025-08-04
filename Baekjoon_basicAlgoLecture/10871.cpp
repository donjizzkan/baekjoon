#include <iostream>
#include <vector>
#include "problems.h"
using namespace std;

void solve10871(void) {
	int n, x;			// n = 입력받을 개수, x = 기준값
	cin >> n >> x;

	vector<int> A(n);			// 입력받을 vector 배열 선언
	vector<int> less;			// x보다 작은 수를 입력할 vector 배열
	int cnt = 0;					// x보다 작은 수의 개수

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < n; i++) {
		if (A[i] < x) {
			less.push_back(A[i]);
			cnt++;
		}
	}
	
	for (int i = 0; i < cnt; i++) {
		cout << less[i] << " ";
	}
}