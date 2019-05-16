#include <cstdio>

using namespace std;

int main()
{
	while (true) {
		int a, b;
		int n = scanf("%d%d", &a, &b);
		if (n == EOF) break;
		printf("%d\n", a + b);
	}
	return 0;
}
