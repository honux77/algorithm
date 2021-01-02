#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(int n) {
	if (n == 1) {
		cout << "YES\n";
		return;
	}

	vector<string> pb;
	while(n--) {
		string num;
		cin >> num;
		pb.push_back(num);
	}
	sort(pb.begin(), pb.end());
	for(int i = 1; i < pb.size(); i++) {
		if (pb[i - 1] == pb[i].substr(0, pb[i - 1].size())) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int c;
	cin >> c;
	while(c--) {
		int n; 
		cin >> n;
		solve(n);
	}
	return 0;
}
