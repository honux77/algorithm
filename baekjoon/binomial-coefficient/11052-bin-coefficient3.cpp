#include <iostream>

using namespace std;
using ull = unsigned long long;
const ull mod = 1000000007ULL;

ull upow(ull x, ull p) {
	ull ans = 1;
	while (p > 0) {
		if (p % 2 != 0) {
			ans *= x;
			ans %= mod;
		}
		x *= x;
		x %= mod;
		p /= 2;
	}
	return ans;
}

int main() {
	ull n, k;
	cin >> n >> k;
	ull ans = 1, u = 1;
	for (ull i = 1; i <= n; i++) {
		ans *= i;
		ans %= mod;
	}

	for (ull i = 1; i <= k; i++) {
		u *= i;
		u %= mod;
	}
	for (ull i = 1; i <= n - k; i++) {
		u *= i;
		u %= mod;
	}
	ull w = upow(u, mod - 2) % mod;
	ans = ans * w % mod;
	cout << ans << '\n';
	return 0;
}