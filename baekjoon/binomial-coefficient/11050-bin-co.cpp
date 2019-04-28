#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

using namespace std;
using ull = unsigned long long;

void solve(ull n, ull k) {
	ull ret = 1;
	for (int i = 2; i <= n; i++) {
		ret *= i;
	}
	for (int i = 2; i <= k; i++) {
		ret /= i;
	}
	for (int i = 2; i <= n - k; i++) {
		ret /= i;
	}
	cout << ret << endl;
}
int main(void) {
	ull n, k;
	cin >> n >> k;
	solve(n, k);
	return 0;
}
