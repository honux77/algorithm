#include <iostream>
#include <cstdio>

int main() {
	int n;
	scanf("%d", &n);
	char buf[4];
	while (n--) {
		scanf("%s", buf);
		int n1 = buf[0] - '0';
		int n2 = buf[2] - '0';
		printf("%d\n", n1 + n2);
 	}
	return 0;
}
