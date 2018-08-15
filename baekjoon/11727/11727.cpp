#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int mod = 10007;

	vector <int> d{ 0, 1, 3 };

	for (int i = 3; i <= n; i++) {
		int s = (d[i - 1] + 2 * d[i - 2]) % mod;
		d.push_back(s);
	}
	cout << d[n] << endl;
	return 0;
}