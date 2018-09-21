#include <iostream>
#include <algorithm>

using namespace std;

int arr[1001];
int d[1001];

int main() {
	int n;
	cin >> n;
	int res = 1;
	for (int i = 1; i <= n ;i++) {
		cin >> arr[i];
		d[i] = 1;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (arr[i] > arr[j]) {
				d[i] = max(d[i], d[j] + 1);
				res = max(res, d[i]);
			}
		}
	}

	cout << res << endl;
	return 0;
}
