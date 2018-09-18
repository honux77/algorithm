#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;
	cin >> n;
	cin >> k;
	vector<int> coins;
	vector<int> d(k + 1,0);
	d[0] = 1;

	for (int i = 0; i < n; i++) {
		int c;
		cin >> c;
		coins.push_back(c);
	}

	for (auto coin: coins) {
		for(int i = coin; i <= k; i++) {
			d[i] += d[i - coin];
		}
	}
	cout << d[k] << endl;
	return 0;
}

