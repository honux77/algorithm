#include <iostream>
#include <algorithm>

using namespace std;
using ull = unsigned long long;

void combination(ull n, ull k) {
	k = min(k, n - k);
	ull ans = 1;
	for (ull i = 0; i < k; i++) {
		ans *= n - i;
		ans /= i + 1;
	}
	cout << ans << endl;
}

int main() {
	ull n, k;
	while (true) {
		cin >> n >> k;
		if (n == 0 && k == 0) {
			return 0;
		}
		combination(n, k);
	}
}
