#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

int d[1001][1001];
int dx[] = { 1, -1 , 0 , 0 };
int dy[] = { 0, -0, 1, -1 };

bool zero(int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (d[i][j] == 0) return true;
		}
	}
	return false;
}

int bfs(queue <pair <int, int>> &q, int m, int n) {
	int ret = 1;
	while (!q.empty()) {
		auto [x, y] = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx > m - 1 || ny < 0 || ny > n - 1) continue;
			if (d[nx][ny] == 0) {
				d[nx][ny] = d[x][y] + 1;
				ret = max(d[nx][ny], ret);
				//printf("%d %d %d %d %d\n", x, y, nx, ny, d[nx][ny]);
				q.push(make_pair(nx, ny));
			}
		}
	}
	if (zero(m, n)) ret = 0;
	return ret - 1;
}

int main() {
	int m, n;
	scanf("%d%d", &n, &m);
	queue<pair<int, int>> q;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &d[i][j]);
			if (d[i][j] == 1) {
				q.push(make_pair(i, j));
			}
		}
	}
	printf("%d\n",bfs(q, m, n));
}

