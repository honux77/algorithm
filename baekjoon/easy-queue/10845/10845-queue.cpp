#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> qq;
void push(int x) {
	qq.push_back(x);
}

int pop() {
	if (qq.empty()) {
		return -1;
	}
	int ret = qq[0];
	qq.erase(qq.begin());
	return ret;
}

int size() {
	return qq.size();
}

int empty() {
	if (qq.empty()) return 1;
	else return 0;
}

int front() {
	if (qq.empty()) return -1;
	else return qq[0];
}

int back() {
	if (qq.empty()) return -1;
	return qq.back();
}

int main(void) {	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	while (n--) {
		string op;
		int num;
		cin >> op;
		if (op == "push") {
			cin >> num;
			push(num);
			continue;
		} else if (op == "pop") {
			num = pop();			
		} else if (op == "size") {
			num = size();			
		} else if (op == "empty") {
			num = empty();
		}
		else if (op == "front") {
			num = front();
		}
		else {
			num = back();
		}
		cout << num << "\n";
	}		
	return 0;
}