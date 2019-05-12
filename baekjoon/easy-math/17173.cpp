#include <iostream>
#include <vector>

using namespace std;

int d[1001];


int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		for (int i = x; i <= n; i+=x) {
			d[i] = 1;
		}
	}

	int sum = 0;
	for (int i = 2; i <= n; i++) {
		if (d[i] == 1) {
			sum += i;
		}
	}
	cout << sum << endl;
	return 0;
}
