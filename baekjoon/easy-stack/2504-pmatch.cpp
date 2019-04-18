#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stack>
#include <iostream>
#include <string>

using namespace std;

const int SL = -1;
const int LL = -2;

bool check(string &r) {
	stack<char> st;
	for (auto c : r) {
		switch (c) {
		case '[':
		case '(':
			st.push(c);
			break;
		case ')':
			if (st.top() != '(') return false;
			st.pop();
			break;
		case ']':
			if (st.top() != '[') return false;
			st.pop();
			break;
		}
	}
	return st.empty();
}

int main(void) {	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string str;
	cin >> str;
	stack<int> ss;

	if (!check(str)) {
		cout << 0 << endl;
		return 0;
	}

	for (auto c : str) {
		int v = 0;		
		switch (c) {
		case '(':
			ss.push(SL);
			break;
		case '[':
			ss.push(LL);
			break;
		case ')':								
			while (ss.top() != SL) {
				v += ss.top();
				ss.pop();
			}
			ss.pop();
			if (v == 0) {
				ss.push(2);
			}
			else {
				ss.push(v * 2);
			}
			break;
		case ']':			
			while (ss.top() != LL) {
				v += ss.top();				
				ss.pop();
			}
			ss.pop();
			if (v == 0) {
				ss.push(3);
			}
			else {
				ss.push(v * 3);
			}
			break;
		}
	}

	int ret = 0;
	while (!ss.empty()) {
		ret += ss.top();
		ss.pop();
	}
	cout << ret << endl;
	return 0;
}