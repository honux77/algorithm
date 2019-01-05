#include <iostream>
#include <queue>

using namespace std;

inline int degree(int d) {
	return (d + 360) % 360;
}
int main() {	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, d;
	cin >> n;
	queue<int> q;
	
	cin >> d;
	q.push(degree(d));
	q.push(degree(0 - d));
	for (int i = 1; i < n; i++) {
		cin >> d;
		int qs = q.size();
		while (qs--) {
			int c = q.front();
			q.pop();
			q.push(degree(c + d));
			q.push(degree(c - d));
		}		
	}

	while (!q.empty()) {
		int r = q.front();
		if (r == 0) {
			cout << "YES" << endl;
			return 0;
		}
		q.pop();
	}
	
	cout << "NO" << endl;
	return 0;
}