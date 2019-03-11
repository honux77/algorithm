#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
using i64 = long long int;

int main()
{
    int n, k, sum = 0;
	int nmax = 5000, nmin = -5000, fv = 0, fc;
	scanf("%d", &n);
	map<int, int> nc;
	vector<int> nv(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		nv[i] = k;
		nc[k]++;
		if (nc[k] > fc) {
			fv = k;
			fc = nc[k];
		}
		sum += k;
	}
	sort(nv.begin(), nv.end());
	
	printf("%.0f\n", (double) sum / n);
	printf("%d\n", nv[n / 2]);
	printf("%d\n", fv);
	printf("%d\n", nv[n - 1] - nv[0]);

    return 0;
}
