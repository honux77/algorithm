#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

char c[50][50];

int check(int x, int y) {
	int count = 0;
	for (int i = x; i < x + 8; i++) {
		for (int j = y; j < y + 8; j++) {
			if ((i + j) % 2 == 0 && c[i][j] != 'W') count++;
			if ((i + j) % 2 == 1 && c[i][j] != 'B') count++;
		}
	}
	count = min(count, 64 - count);
	//printf("%d %d %d\n", x, y, count);
	return count;
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%s", c[i]);
	}
	
	int ans = m * n;
	
	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			int w = check(i, j);
			ans = min(ans, w);
			if (ans == 0) goto end;
		}
	}

end: 
	printf("%d\n", ans);	
	return 0;
}