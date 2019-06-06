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
		}
	}
	return count >= 3;
}

int main() {
	int n;
	cin >> n;
	int count = 0;
	for (int i = 1; i <= 10000; i++) {
		if (check(i)) {
			count++;
			if (count == n) {
				cout << i << endl;
				return 0;
			}
		}
	}
	return 0;
}