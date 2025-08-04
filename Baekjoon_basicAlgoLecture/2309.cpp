#include <iostream>
#include <vector>
#include "problems.h"
using namespace std;

void solve2309() {
	vector<int> dwarf(9);			// 9 ������ Ű ������ �迭
	int sum = 0;					// Ű�� ����
	int notDwarf1, notDwarf2;		// �����̰� �ƴ� ����� '�迭 ��ġ��'
	bool finding = false;			// ã�� ���� ����

	for (int i = 0; i < 9; i++) {
		cin >> dwarf[i];
		sum += dwarf[i];
	}
	int find = sum - 100;			// �����̰� �ƴ� ����� �� Ű ��
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if ((dwarf[i] + dwarf[j]) == find) {
				notDwarf1 = i;
				notDwarf2 = j;
				finding = true;
				break;
			}
		}
		if (finding == true)
			break;
	}
	dwarf.erase(dwarf.begin() + notDwarf1);
	notDwarf2 -= 1;
	dwarf.erase(dwarf.begin() + notDwarf2);

	for (int i = 0; i < 7 - 1; i++) {
		for (int j = 0; j < 7 - 1 - i; j++) {
			if (dwarf[j] > dwarf[j + 1]) {
				swap(dwarf[j], dwarf[j + 1]);
			}
		}
	}
	for (int i = 0; i < 7; i++) {
		cout << dwarf[i] << "\n";
	}
}