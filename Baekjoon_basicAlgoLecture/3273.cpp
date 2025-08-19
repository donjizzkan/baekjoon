#include "problems.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve3273() {
	// ========================= 해당 해답은 시간 초과. 투 포인터(two pointer) 사용
	// ========================= two pointer : 양쪽에 포인터 배치, 상황에 따라 이동, 겹치면 종료
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