#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

char a[25][25];
bool v[25][25];

using namespace std;

int bfs(int i, int j, int n) {
	if (i < 0 || i >= n || j < 0 || j >= n || a[i][j] == '0' || v[i][j]) {
		return 0;		
	}
	v[i][j] = true;	
	return 1 + bfs(i - 1, j, n) + bfs(i + 1, j, n) + bfs(i, j - 1, n) + bfs(i, j + 1, n);
}

int main() {
	int n;
	cin >> n;
	vector<int> res;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < n; j++) {
			a[i][j] = s[j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {			
			if (!v[i][j] && a[i][j] == '1') {				
				res.push_back(bfs(i, j, n));
			}
		}		
	}

	sort(res.begin(), res.end());
	cout << res.size() << endl;
	for (auto i : res) {
		cout << i << "\n";
	}
	return 0;
}
