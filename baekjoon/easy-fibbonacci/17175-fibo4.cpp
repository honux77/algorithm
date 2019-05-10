#include <iostream>

using namespace std;
using ull = unsigned long long;

ull d[51];
ull mod = 1000000007;


int main() {
	d[0] = 1;
	d[1] = 1;
	int n;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		d[i] = (1 + d[i - 1] + d[i - 2]) % mod;
	}

	cout << d[n] << endl;
	return 0;
}
