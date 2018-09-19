//https://www.acmicpc.net/problem/1912

#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

ll arr[100001];
ll d[100001];

int main() {
	int n;
	ll res = -1e15;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i <= n; i++) {
		d[i] = max(d[i - 1] + arr[i], arr[i]);
		res = max(res, d[i]);
	}
	cout << res << endl;
	return 0;
}

