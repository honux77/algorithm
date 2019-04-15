#include <string.h>
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
const int pmax = 10000;

bool p[pmax + 1];
vector<int> pnums;

void filter() {
	memset(p, true, pmax + 1);
	for (int i = 2; i <= pmax; i++) {
		if (!p[i]) continue;
		pnums.push_back(i);
		for (int j = i * 2; j <= pmax; j += i) {
			p[j] = false;
		}
	}
}

void solve() {
	int n;
	cin >> n;
	int l = 0, r = pnums.size() - 1;
	int ml = l, mr = r;
	int mdiff = pmax + 1;

	while(l <= r) {
		//printf("%d %d\n", p[l], p[r]);
		int sum = pnums[l] + pnums[r];
		if (sum < n) {
			l++;
		} else if (sum > n) {
			r--;
		} else {
			if (mdiff > (pnums[r] - pnums[l])) {
				mdiff = pnums[r] - pnums[l];
				ml = l;
				mr = r;
			}
			l++;
			r--;
		}
	}
	printf("%d %d\n", pnums[ml], pnums[mr]);
}

int main()
{
	filter();
    int t;
    cin >> t;
	while (t--) {
		solve();
	}
    return 0;
}
