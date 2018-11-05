#include <iostream>
#include <algorithm>

using namespace std;

int d[1000001];

int main() {
	int n;
	cin >> n;
	for(int i = 2; i <= n; i++) {
		int t = d[i - 1];
		if (i % 2 == 0) {
			t = min(t, d[i / 2]);
		}
		if (i % 3 == 0) {
			t = min(t, d[i / 3]);
		}
		d[i] = t + 1;
	}
	cout << d[n] << endl;
	return 0;
}
