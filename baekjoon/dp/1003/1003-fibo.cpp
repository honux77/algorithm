#include <iostream>

using namespace std;
using ull = unsigned long long;

ull d[41];

void fibo(int n) {
	if (n == 0) {
		printf("1 0\n");
		return;
	}
	if (n == 1) {
		printf("0 1\n");
		return;
	}
	for (int i = 2; i <= n; i++) {
		d[i] = d[i - 1] + d[i - 2];
	} 
	printf("%llu %llu\n", d[n - 2], d[n - 1]);
}

int main() {
	d[0] = d[1] = 1;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		fibo(n);
	}
}
