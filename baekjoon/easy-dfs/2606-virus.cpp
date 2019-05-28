#include <cstdio>
#include <iostream>

using namespace std;
bool graph[101][101];
bool visit[101];

void dfs(int v, int n) {
	visit[v] = true;
	//printf("%d\n", v);
	for (int i = 1; i <= n; i++) {
		if (!visit[i] && graph[v][i]) {
			dfs(i, n);
		}
	}
}

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	while (m--) {
		int u,v;
		scanf("%d%d", &u, &v);
		graph[u][v] = graph[v][u] = 1;
	}
	dfs(1, n);
	int count = 0;
	for (int i = 2; i <= n; i++) {
		if (visit[i]) count++;
	}
	printf("%d\n", count);
	return 0;
}
