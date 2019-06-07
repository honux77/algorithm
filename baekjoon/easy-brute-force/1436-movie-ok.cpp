#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

bool check(int n) {
	string s = to_string(n);
	return (s.find("666") != string::npos);
}

int main() {
	int n;
	cin >> n;
	int count = 0;
	int i = 1;
	for(int i = 1;; i++) {
		if (check(i)) {
			count++;
			if (count == n) {
				cout << i << endl;
				return 0;
			}
		}
	i++;
	}
	return 0;
}
