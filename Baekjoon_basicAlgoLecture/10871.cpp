#include <iostream>
#include <vector>
#include "problems.h"
using namespace std;

void solve10871(void) {
	int n, x;			// n = �Է¹��� ����, x = ���ذ�
	cin >> n >> x;

	vector<int> A(n);			// �Է¹��� vector �迭 ����
	vector<int> less;			// x���� ���� ���� �Է��� vector �迭
	int cnt = 0;					// x���� ���� ���� ����

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