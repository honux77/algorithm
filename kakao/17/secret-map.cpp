#include <iostream>
#include <vector>

using namespace std;

void print(int n, int size) {
	string res = "";
	while(n != 0) {
		if (n % 2 == 1) {
			res = "#" + res;
		} else {
			res = "_" + res;
		}
		n /= 2;
	}
	while (res.length() < size) {
		res = "_" + res;
	}
	cout << res << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> a(n);
	vector<int> b(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < n; i++) {
		int s = a[i] | b[i];
		print(s, n);
	}

	return 0;
}
