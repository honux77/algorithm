#include <iostream>
#include <string>
#include <stack>

using namespace std;

void match(const string &s) {
	stack<char> st;
	for (auto c : s) {
		if (c == '(') {
			st.push('(');
		} else {
			if (st.size() != 0) {
				st.pop();
			} else {
				cout << "NO" << '\n';
				return;
			}
		}
	}
	if (st.size() == 0) {
		cout << "YES" << '\n';
	}
	else {
		cout << "NO" << '\n';
	}
}

int main() {
	int n;
	cin >> n;	
	while (n--) {
		string s;
		cin >> s;
		match(s);
	}
	return 0;	
}

