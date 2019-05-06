#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;

	vector <int> costs(n + 1);
	vector <int> d(n + 1);
	vector <int> indegree(n + 1);
	vector <vector<int>> graph(n + 1);

	//set cost
	for (int i = 1; i <= n; i++) {
		cin >> costs[i];
	}

	for (int i = 0; i < k; i++) {
		int x, y;
		cin >> x >> y;
		indegree[y]++;
		graph[x].push_back(y);
	}

	int last;
	cin >> last;
	queue<int>q;
	for (int i = 1; i <= n; i++) {
		if (indegree[i] == 0) {
			d[i] = costs[i];
			q.push(i);
		}
	}

	while (true) {
		int curr = q.front();
		if (curr == last) {
			cout << d[last] << "\n";
			return;
		}
		q.pop();

		for (auto next: graph[curr]) {
			indegree[next]--;
			if (indegree[next] == 0) {
				q.push(next);
			}
			d[next] = max(d[next], d[curr] + costs[next]);
		}
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}