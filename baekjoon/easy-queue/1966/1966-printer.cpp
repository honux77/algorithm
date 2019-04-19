#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <map>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
	int n, m;
	vector<int> iq;
	map<int, int, std::greater<int>> imap;
	int count = 1;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		iq.push_back(x);
		imap[x]++;
	}

	while (true) {
		int p = iq[0];
		iq.erase(iq.begin());
		int minp = imap.begin()->first;
		if (p == minp) {
			if (m == 0) {
				cout << count << "\n";
				return;
			} 
			count++;
			imap[minp]--;
			if (imap[minp] == 0) {
				imap.erase(minp);
			}		
		}
		else {
			iq.push_back(p);
		}
		m--;
		if (m < 0) m = iq.size() - 1;
	}

}

int main(void) {	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}