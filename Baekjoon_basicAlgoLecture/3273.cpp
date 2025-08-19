#include "problems.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve3273() {
	// ========================= �ش� �ش��� �ð� �ʰ�. �� ������(two pointer) ���
	// ========================= two pointer : ���ʿ� ������ ��ġ, ��Ȳ�� ���� �̵�, ��ġ�� ����
	//int number, x, cnt = 0;
	//cin >> number;
	//vector<int> nums(number);
	//for (int i = 0; i < number; i++)
	//	cin >> nums[i];
	//cin >> x;

	//for (int i = 0; i < number - 1; i++) {
	//	for (int j = i + 1; j < number; j++) {
	//		if ((nums[i] + nums[j]) == x)
	//			cnt++;
	//	}
	//}
	//cout << cnt;

	int number, x, cal, cnt = 0;
	cin >> number;
	int leftPointer = 0, rightPointer = number - 1;
	vector<int> nums(number);
	for (int i = 0; i < number; i++)
		cin >> nums[i];
	cin >> x;

	sort(nums.begin(), nums.end());
	while (leftPointer<rightPointer) {
		cal = nums[leftPointer] + nums[rightPointer];
		if (cal < x)
			leftPointer++;
		else if (cal > x)
			rightPointer--;
		else if (cal == x) {
			cnt++;
			leftPointer++;
			rightPointer--;
		}
	}
	cout << cnt;

}