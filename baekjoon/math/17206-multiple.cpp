#include <cstdio>

using namespace std;

void solve() {
	int n;
	scanf("%d", &n);
	int sum = 0;
	int l = n;
	while (l % 3 != 0) l--;
	if (l >= 3) {
		sum = l / 3 * (3 + l) / 2;
	}
	
	l = n;
	while (l % 7 != 0) l--;
	if (l >= 7) {
		sum += l / 7 * (7 + l) / 2;
	}

	l = n;
	while (l % 21 != 0) l--;
	if (l >= 21) {
		sum -= l / 21 * (21 + l) / 2;
	}
	printf("%d\n", sum);
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		solve();
	}
	return 0;
}
