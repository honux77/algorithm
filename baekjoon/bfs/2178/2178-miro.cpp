#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <queue>
using namespace std;

int map[101][101];
const int dr[] = { -1, 1, 0, 0 };
const int dc[] = { 0, 0, 1, -1 };


void bfs(int r, int c) {
	queue<pair<int, int>> q;
	q.push(make_pair(0, 0));
	map[0][0] = -1;

	while (!q.empty()) {
		auto [i, j] = q.front();
		if (i == r && j == c) return;
		q.pop();

		for (int k = 0; k < 4; k++) {
			int ni = i + dr[k];
			int nj = j + dc[k];
			if (ni < 0 || ni > r - 1 || nj < 0 || nj > c - 1) continue;
			if (map[ni][nj] == 1) {
				q.push(make_pair(ni, nj));
				map[ni][nj] = map[i][j] - 1;
			}
		}
	}
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &map[i][j]);
		}
	}

	map[0][0] = 1;
	bfs(n, m);
	printf("%d\n", -map[n -1][m - 1]);
	return 0;
}
