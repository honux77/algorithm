#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n, h, w, k, y, x;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d %d", &h, &w, &k);
		k--;
		y = k % h + 1;
		x = k / h + 1;
		printf("%d%02d\n", y, x);
	}
	return 0;
}