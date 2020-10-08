#include <cstdio>
#include <iostream>
#include <map>

using namespace std;

int main() {
	int n, m, x;
	map<int, bool> nums;
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &x);
		nums[x] = true;
	}

	scanf("%d", &m);
	while(m--) {
		scanf("%d", &x);
		if (nums[x]) printf("1\n");
		else printf("0\n");
	}
	return 0;
}
