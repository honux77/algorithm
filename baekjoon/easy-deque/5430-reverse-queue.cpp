#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <deque>
#include <string>
#include <sstream>

using namespace std;

inline int dcount(string& s) {
	int ret = 0;
	for (auto c : s) {
		if (c == 'D') ret++;
	}
	return ret;
}

void solve() {
	deque<int> dq;
	int qsize;
	string cmd1, cmd2;
	cin >> cmd1 >> qsize >> cmd2;
	if (qsize < dcount(cmd1)) {
		cout << "error\n";
		return;
	}
	cmd2 = cmd2.substr(1, cmd2.size() - 2);
	string word;
	stringstream istream(cmd2);
	while (getline(istream, word, ',')) {
		int n = stoi(word);
		dq.push_back(n);
	}

	bool order = true;
	for (auto c : cmd1) {
		int x = 0;
		if (c == 'R') {
			order = !order;
			continue;
		}
		if (order) {
			dq.pop_front();
		}
		else {
			dq.pop_back();
		}
	}

	cout << "[";
	while (dq.size() > 1) {
		int x;
		if (order) {
			x = dq.front();
			dq.pop_front();
		}
		else {
			x = dq.back();
			dq.pop_back();
		}

		cout << x << ",";
	}

	if (dq.size() == 1) cout << dq.front();
	cout << "]\n";
}


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--) {
		solve();
	}
	return 0;
}