# include <iostream>

//https://www.acmicpc.net/problem/2839
// 간단 greedy 응용

using namespace std;

int main() {
	int n, res, r;
	cin >> n;

	res = n / 5;
	r = n % 5;

	while (true) {
		if (r % 3 == 0) {
			res += r / 3;
			cout << res << endl;
			return 0;
		} else if (res == 0) {
			cout << -1 << endl;
			return 0;
		}
		else {
			res--;
			r += 5;
		}
	}	
}
