#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cstdio>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	int ans = 0;
	cin >> n;
	map <int, int> q;

	for (int i = 0; i < n; i++) {
		string p;
		cin >> p;
		int minv = 0;
		int sum = 0;
		for (auto& c: p) {
			if(c == '(') 
				sum++;
			else 
				sum--;
			minv = min(minv, sum);
			
		}
		if (minv == sum || minv >= 0) {
			q[sum]++;
		}
	}

	vector<int> k;

	for (auto& ci: q) {
		//cout << ci.first << ":" << ci.second <<endl;
		k.push_back(ci.first);
	}
	
	for (auto& ki: k) {
		if (ki > 0) 
			break;
		if (ki == 0) {
			ans += q[ki] / 2;
		} else {
			ans += min(q[ki], q[-ki]);
		}
	}

	cout << ans << endl;
	return 0;
}
