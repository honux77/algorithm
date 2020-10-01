#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;
using i64 = long long int;

string balanced(string s) {
	stack<char> st;
	
	for (auto &c: s) {
		switch (c) {
			case '(':
			case '[':
				st.push(c);
				break;
			case ')':
				if (!st.empty() && st.top() == '(') {
					st.pop();
				} else {
					return "no";
				}
				break;
			case ']':
				if (!st.empty() && st.top() == '[') {
					st.pop();
				} else {
					return "no";
				}
		}
	}
	
	if (st.empty()) return "yes";
	return "no";
}
	
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    while (true) {
		string s;
		getline(cin, s);
		if (s == ".") break;
		cout << balanced(s) << "\n";
	}
    return 0;
}
