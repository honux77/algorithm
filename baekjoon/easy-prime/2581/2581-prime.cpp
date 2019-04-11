#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>


const int MAXP = 10000;
bool prime[MAXP + 1];

using namespace std;

void primeFilter() {
	prime[0] = prime[1] = true;
	for (int i = 2; i <= MAXP; i++) {
		if (prime[i]) continue;
		for (int j = 2 * i; j <= MAXP; j+=i) {
			prime[j] = true;
		}
	}
}

int main() {
	primeFilter();
	int n, m;
	cin >> n >> m;
	int psum = 0;
	int pmin = 10000;
	for (int i = n; i <= m; i++) {
		if (!prime[i]) {
			psum += i;
			pmin = min(i, pmin);
		}
	}
	
	if (psum == 0) {
		cout << -1 << endl;
	}
	else {
		cout << psum << endl;
		cout << pmin << endl;
	}	
	return 0;
}