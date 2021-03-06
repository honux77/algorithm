#include <cstdio>
#include <iostream>

using namespace std;

bool check(int n) {
	int count = 0;
	int c = 0;
	int p = 0;
	while (n != 0) {
		p = c;
		c = n % 10;
		n /= 10;
		if (c == 6) { 
			if (p!= 6) count = 1;
			else count++;
			if (count >= 3) return true;
		}
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	int count = 0;
	for(int i = 1;; i++) {
		if (check(i)) {
			cout << i << endl;
			count++;
			if (count == n) {
				cout << i << endl;
				return 0;
			}
		}
	}
	return 0;
}
