#include <cstdio>
#include <iostream>

using namespace std;

int main()
{

	int p[6];
	int wscore = 0, widx = 0;

	for (int i = 1; i <= 5; i++) {
		p[i] = 0;
		for (int j = 0; j < 4; j++) {
			int s;
			scanf("%d\n", &s);
			p[i] += s;
		}
		if (p[i] > wscore) {
			widx = i;
			wscore = p[i];
		}
	}

	printf("%d %d\n", widx, wscore);
    return 0;
}
