#include <iostream>
#include <map>
#include <string>

using namespace std;

void solve() {
	int n;
	cin >> n;
	map<string, int> c;

	for (int i = 0; i < n; i++) {
		string name, type;
		cin >> name >> type;
		c[type]++;
	}

	int res = 1;
	for (auto item : c) {
		res *= item.second + 1;
	}
	res--;
	cout << res << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}