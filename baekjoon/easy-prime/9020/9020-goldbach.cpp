#include <string.h>
#include <stdio.h>
#include <iostream>

using namespace std;
const int pmax = 10000;

bool p[pmax + 1];

void filter() {
	memset(p, true, pmax + 1);
	for (int i = 2; i <= pmax; i++) {
		if (!p[i]) continue;
		for (int j = i * 2; j <= pmax; j += i) {
			p[j] = false;
		}
	}
}

void nextLeft(int &left) {
	do {
		left++;
	} while(!p[left]);
}

void nextRight(int &right) {
	do {
		right--;
	} while(!p[right]);
}

void solve() {
	int n;
	cin >> n;
	int left = 2;
	int right = n - left;
	int lp = 0, rp = 0;
	int mdiff = pmax + 1;

	nextRight(right);
	while(left <= right) {
		int sum = left + right;
		if (sum < n) {
			nextLeft(left);
		} else if (sum > n) {
			nextRight(right);
		} else {
			if (mdiff > (right - left)) {
				mdiff = right - left;
				lp = left;
				rp = right;
			}
			nextLeft(left);
			nextRight(right);
		}
	}
	printf("%d %d\n", lp, rp);
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
