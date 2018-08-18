# include <cstdio>
# include <memory.h>
# include <iostream>
# include <algorithm>

//BOJ 1932 정수삼각형
//DP로 금방 풀린다
// https://www.acmicpc.net/problem/1932

using namespace std;

int d[501][501];

int main() {
	int n, input;
	cin >> n;	

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> input;
			d[i][j] = input + max(d[i - 1][j - 1], d[i - 1][j]);
		}
	}
	
	int res = 0;

	for (int i = 1; i <= n; i++) {
		res = max(d[n][i], res);
	}
	
	cout << res << endl;	
	return 0;
}
