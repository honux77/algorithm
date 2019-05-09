#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int d[1001][1001];


int main() {
	string a, b;
	cin >> a >> b;

	int m = a.size();
	int n = b.size();
	int ans = 0;

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i - 1] == b[j - 1]) {
				d[i][j] = d[i - 1][j - 1] + 1;
			}
			else {
				d[i][j] = max(d[i - 1][j], d[i][j - 1]);
			}
		}
	}
	cout << d[m][n] << endl;
	return 0;
}
