# include <cstdio>
# include <memory.h>
# include <iostream>
# include <algorithm>

using namespace std;

int input[501][501];
int d[501][501];

int getMax(int i, int j) {
	if (j == 0) {
		return d[i - 1][j];
	} else {
		return max(d[i - 1][j - 1], d[i - 1][j]);
	}
}

int main() {

	memset(input, 0, sizeof(input));
	memset(d, 0, sizeof(d));

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> input[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			d[i][j] = input[i][j] + getMax(i, j);
		}
	}
	
	int res = 0;

	for (int i = 1; i <= n; i++) {
		res = max(d[n][i], res);
	}
	
	cout << res << endl;	
	return 0;
}