#include <cstdio>
#include <iostream>
#include <vector>
#include <map>

using namespace std;
using i64 = long long int;

void solve(int s, int e) {
	int d = e - s;
	int num = 0;
	for (int m = 1;;m++) {
		for (int q = 0; q < 2; q++) {
			d -= m;
			num++;
			//cout << d << "," << num << endl;
			if (d <= 0) {
				cout << num << endl;
				return;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int pn;
	cin >> pn;
	for(int i = 0; i < pn; i++) {
		int s, e;
		cin >> s >> e;
		solve(s, e);
	}
	return 0;
}
