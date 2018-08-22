#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    ll mod = ll(1e12);
	ll s = 1;
	for (int i = 2; i <=n ; i++) {
		s *= i;
		while (s % 10 == 0) {
			s /= 10;
		}
		s %= mod;
	}
	printf("%05lld\n", s % 100000);
    return 0;
}
