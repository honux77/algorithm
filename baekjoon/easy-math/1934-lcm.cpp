#include <iostream>
#include <cstdio>

using namespace std;
using ull = unsigned long long;

void lcm() {
	ull a, b;
	cin >> a >> b;
	ull ans = a * b;
	ull temp;
	while (true) {
		if (a % b == 0) {
			break;
		} 
		temp = a % b;
		a = b;
		b = temp;
	}
	cout << ans / b << "\n";
}

int main()
{
	int n;
	cin >> n;
	while (n--) {
		lcm();
	}
	
	return 0;
}

