//https://www.acmicpc.net/problem/10866

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <map>
#include <iostream>
#include <queue>
#include <string>

using namespace std;

vector<int> iv;

void process(string& cmd) {
	int x;
	if (cmd == "push_front") {
		cin >> x;
		iv.insert(iv.begin(), x);
	}
	else if (cmd == "push_back") {
		cin >> x;
		iv.push_back(x);
	}
	else if (cmd == "pop_front") {
		if (iv.empty()) {
			x = -1;
		}
		else {
			x = iv.front();
			iv.erase(iv.begin());
		}
		cout << x << "\n";					
	}
	else if (cmd == "pop_back") {
		if (iv.empty()) {
			x = -1;
		}
		else {
			x = iv.back();
			iv.erase(iv.end() - 1);
		}
		cout << x << "\n";
	}
	else if (cmd == "size") {
		cout << iv.size() << "\n";
	}
	else if (cmd == "empty") {		
		cout << iv.empty() << "\n";
	}
	else if (cmd == "front") {
		if (iv.empty()) {
			x = -1;
		}
		else {
			x = iv.front();
		}
		cout << x << "\n";
	}
	else if (cmd == "back") {
		if (iv.empty()) {
			x = -1;
		}
		else {
			x = iv.back();
		}
		cout << x << "\n";
	}
	return;
}


int main(void) {	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;

	while (t--) {
		string cmd;
		cin >> cmd;
		process(cmd);

	}
	
	return 0;
}