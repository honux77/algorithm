#include <iostream>
#include <utility>

using namespace std;

int main() {
	int u;
	cin >> u;
	int d, m, i = 1;
	for(int n = 1;; n++) {
		for (int j = 1; j <= n; j++, i++) {
			d = j; 
			m = n + 1 - j;
			if (n % 2 == 1) {
				swap(d, m);
			}
			if (i == u) {
				cout << d << "/" << m << endl;
				return 0;
			}
		}
	}
}
