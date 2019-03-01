#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
using i64 = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

	int t, m, n, x, y;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d%d%d", &m, &n, &x, &y);
		int i = 1, j = 1, k = 1;
		while(true) {
			if (i == x && j == y) {
				printf("%d\n", k);
				break;
			}
			i = i < m ? i + 1: 1;
			j = j < n ? j + 1: 1;
			k++;
			if (k > m * n) {
				printf("-1\n");
				break;
			}
		}
	}
   	return 0; 
}
