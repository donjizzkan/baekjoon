#include "problems.h"
#include <iostream>
#include <vector>
using namespace std;

void solve10808() {
	string word;
	vector<int> cnt(26, 0);

	cin >> word;
	for (int i = 0; i < word.size(); i++) {
		// �ش� ���ڿ��� 'a'�� �ƽ�Ű �ڵ带 �� ��ġ�� 1 ����
		// ���� ��� ù ���ڰ� 'a'��� 'a' - 'a' = 0�̹Ƿ� cnt[0]++; �� ����
		cnt[word[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		cout << cnt[i] << " ";
	}
}