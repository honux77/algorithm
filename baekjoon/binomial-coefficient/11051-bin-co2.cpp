#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

const int mod = 10007;
int d[1001][1001];

void solve(int n, int k) {
	for(int i = 0; i <= n; i++) {
		for(int j = 0; j <= i; j++) {
			if (j == 0 || j == i) {
				d[i][j] = 1;
			} else {
				d[i][j] = (d[i - 1][j - 1] + d[i - 1][j]) % mod;
			}
		}
	}
	cout << d[n][k]<< endl;
}
int main(void) {
	int n, k;
	cin >> n >> k;
	solve(n, k);
	return 0;
}
