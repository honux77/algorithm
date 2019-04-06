#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;
using i64 = long long int;

bool check4(int n) {
	string s = to_string(n);
	for (auto c: s) {
		if (c == '4') return true;
	}	
	return false;
}

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		int r;
		scanf("%d", &r);
		for (int x = 1; x < r; x++) {
			if (check4(x)) continue;
			int y = r - x;
			if (check4(y)) continue;
			else {
				printf("Case #%d: %d %d\n", i, x, y);
				break;
			}
		}
	}
	return 0;
}
