#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	int n, k;
	scanf("%d %d", &n, &k);

	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		nums[i] = x;
	}
	sort(nums.rbegin(), nums.rend());

	int count = 0, idx = 0;
	while (k != 0) {
		while (k < nums[idx]) idx++;
		count += k / nums[idx];
		k %= nums[idx];
	}
	printf("%d\n", count);
	return 0;
}
