#include <iostream>
#include "problems.h"
using namespace std;

void solve2480(void) {
	int A, B, C;
	cin >> A >> B >> C;
	if (A == B && B == C)
		cout << 10000 + A * 1000;
	else if (A == B)
		cout << 1000 + A * 100;
	else if (A == C)
		cout << 1000 + A * 100;
	else if (B == C)
		cout << 1000 + B * 100;
	else {
		if (A > B && A > C)
			cout << 100 * A;
		if (B > A && B > C)
			cout << 100 * B;
		if (C > A && C > B)
			cout << 100 * C;
	}
}