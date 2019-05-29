# include <stdio.h>
# include <iostream>

using namespace std;

void gcdlcm(int a, int b) {
	int gcd;
	int lcm = a * b;
	while (true) {
		int c = a % b;
		if (c == 0) {
			gcd = b;
			break;
		}
		a = b;
		b = c;
	}
	lcm /= gcd;
	printf("%d\n%d\n", gcd, lcm);
}

int main() {
	int a, b;
	cin >> a >> b;
	gcdlcm(a, b);
	return 0;
}
