#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	vector<vector<int>> c(m), d(m);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int u;
			scanf("%d", &u);
			c[i].push_back(u);
			d[i].push_back(0);
		}
	}
	d[0][0] = 1;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i > 0 && c[i][j] < c[i - 1][j]) d[i][j] += d[i - 1][j];
			if (i < m - 1 && c[i][j] < c[i + 1][j]) d[i][j] += d[i + 1][j];
			if (j > 0 && c[i][j] < c[i][j - 1]) d[i][j] += d[i][j - 1];
			if (j < n - 1 && c[i][j] < c[i][j + 1]) d[i][j] += d[i][j + 1];
		}
	}
	printf("%d\n", d[m-1][n-1]);

	for (auto v : d) {
		for (auto i : v) {
			printf("%d", i);
		}
		printf("\n");
	}
}
