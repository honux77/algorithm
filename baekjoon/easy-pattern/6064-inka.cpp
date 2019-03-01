#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
using i64 = long long int;

int main()
{
	int t, m, n, x, y;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d%d%d", &m, &n, &x, &y);
		int i = x, j = x, k = x;
		bool find = false;
		for (int u = 0; u < n; u++) {
			j  = j % n == 0? n: j % n;
			if (j == y) {
				find = true;
				break;
			}
			j =  j + m;
			k += m;
		}
		if (find)
            printf("%d\n", k);
        else
            printf("-1\n");
	}		
   	return 0; 
}
