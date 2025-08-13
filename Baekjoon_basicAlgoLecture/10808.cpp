#include "problems.h"
#include <iostream>
#include <vector>
using namespace std;

void solve10808() {
	string word;
	vector<int> cnt(26, 0);

	cin >> word;
	for (int i = 0; i < word.size(); i++) {
		// 해당 글자에서 'a'의 아스키 코드를 뺀 위치에 1 가산
		// 예를 들어 첫 글자가 'a'라면 'a' - 'a' = 0이므로 cnt[0]++; 이 실행
		cnt[word[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		cout << cnt[i] << " ";
	}
}