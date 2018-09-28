//https://www.acmicpc.net/problem/2292

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	int c = 1, s = 1, i = 6;
	while (s < n) {
		c++;
		s += i;
		i += 6;
	}
	cout << c << endl;
	return 0;
}

