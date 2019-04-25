#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
using ull = unsigned long long;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<ull> d(n + 1);
	d[0] = 0;
	d[1] = 1;
	
	for (int i = 2; i <= n; i++) {
		d[i] = d[i - 1] + d[i - 2];
	}

	cout << d[n] << endl;	
	return 0;
}