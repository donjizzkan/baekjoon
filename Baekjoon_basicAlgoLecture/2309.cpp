#include <iostream>
#include <vector>
#include "problems.h"
using namespace std;

void solve2309() {
	vector<int> dwarf(9);			// 9 난쟁이 키 저장할 배열
	int sum = 0;					// 키의 총합
	int notDwarf1, notDwarf2;		// 난쟁이가 아닌 사람의 '배열 위치값'
	bool finding = false;			// 찾음 유무 저장

	for (int i = 0; i < 9; i++) {
		cin >> dwarf[i];
		sum += dwarf[i];
	}
	int find = sum - 100;			// 난쟁이가 아닌 사람의 두 키 합
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