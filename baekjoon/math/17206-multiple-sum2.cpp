#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>

using namespace std;

const int NMAX = 80000;
int d[NMAX + 1];

void solve() {
	int n;
	scanf("%d", &n);
	printf("%d\n", d[n]);
}

void init() {
	for (int i = 3; i <= NMAX; i++) {
		if (i % 3 == 0 || i % 7 == 0) {
			d[i] = d[i - 1] + i;
		}
		else {
			d[i] = d[i - 1];
		}
	}
}

int main() {

	init();
	int t;
	scanf("%d", &t);
	while (t--) {
		solve();
	}
	return 0;
}

