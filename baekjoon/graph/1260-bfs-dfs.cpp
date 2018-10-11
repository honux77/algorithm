#include <iostream>
#include <queue>

int graph[1001][1001];
bool check[1001];
bool check2[1001];

using namespace std;

void dfs(int s, int n) {
	check[s] = true;
	cout << s << ' ';
	for(int j = 1; j <= n; j++) {
		if (graph[s][j] == 1 && !check[j]) {
			dfs(j, n);
		}
	}
}

void bfs(int s, int n) {
	queue<int> q;
	q.push(s);
	while (!q.empty()) {
		int node = q.front();
		q.pop();
		if (check2[node]) {
			continue;
		}
		check2[node] = true;
		cout << node << ' ';
		for (int i = 1; i <= n; i++) {
			if(graph[node][i] == 1 && !check2[i]) {
				q.push(i);
			}
		}
	}
}

int main() {
	int n, m, v;
	cin >> n >> m >> v;

	while (m--) {
		int g1, g2;
		cin >> g1 >> g2;
		graph[g1][g2] = 1;
		graph[g2][g1] = 1;
	}

	dfs(v, n);
	cout << '\n';
	bfs(v, n);
	cout << '\n';

	return 0;
}
