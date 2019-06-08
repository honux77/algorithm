#include <iostream>
#include <cstdio>

using namespace std;
using ull = unsigned long long;

ull ans(int n) {
	ull ans = 1;
	for (int i = 0; i <n ;i++) {
		ans *= 2;
	}
	return ans - 1;
}

void hanoi(int num, int src, int target) {
	int temp = 6 - src - target;
	if(num == 0) return;
	hanoi(num - 1, src, temp);
	printf("%d %d\n", src, target);
	hanoi(num - 1, temp, target);
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%lld\n", ans(n)); 
	hanoi(n, 1, 3);
	return 0;
}
