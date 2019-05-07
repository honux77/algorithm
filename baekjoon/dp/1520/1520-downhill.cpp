#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>

using namespace std;
int d[501][501];
int c[501][501];
using ituple = tuple<int, int, int>;


int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	vector<ituple> rank;

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			int u;
			scanf("%d", &u);
			c[i][j] = u;
			rank.push_back(make_tuple(u, i, j));
		}
	}

	sort(rank.begin(), rank.end());
	d[1][1] = 1;
	for (int idx = rank.size() - 1; idx >= 0; idx--) {
		int r = get<0>(rank[idx]);
		int i = get<1>(rank[idx]);
		int j = get<2>(rank[idx]);
		if (i > 1 && c[i][j] < c[i - 1][j]) d[i][j] += d[i - 1][j];
		if (i < m && c[i][j] < c[i + 1][j]) d[i][j] += d[i + 1][j];
		if (j > 1 && c[i][j] < c[i][j - 1]) d[i][j] += d[i][j - 1];
		if (j < n && c[i][j] < c[i][j + 1]) d[i][j] += d[i][j + 1];
	}
	printf("%d\n", d[m][n]);
}