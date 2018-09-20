#include <iostream>
#include <stack>

using namespace std;

void runcmd(stack<int> &s, string cmd, int num) {
	if (cmd == "push") {
		s.push(num);
	} else if (cmd == "pop") {
		if (s.empty()) {
			cout << "-1" << endl;
			return;
		}
		cout << s.top() << endl;
		s.pop();

	} else if (cmd == "size") {
		cout << s.size() << endl;
	} else if (cmd == "empty") {
		cout << s.empty() << endl;
	} else if (cmd == "top") {
		cout << s.top() << endl;
	}
}

int main() {
	stack<int> s;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string cmd;
		int num = 0;
		cin >> cmd;

		if (cmd == "push") {
			cin >> num;
		}
		runcmd(s, cmd, num);
	}
	return 0;
}

