#include <stdio.h>
#include <iostream>

using namespace std;
using ull = unsigned long long;

ull fact(ull n) {
	if (n == 1 || n == 0) {
		return 1;
	}
	else return n * fact(n - 1);
}
int main(void) {
	ull n;
	cin >> n;
	cout << fact(n) << endl;
	return 0;
}
