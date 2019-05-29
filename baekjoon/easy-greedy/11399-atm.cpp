#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		nums[i] = x;
	}
	sort(nums.begin(), nums.end());

	int sum = 0;
	for (int i = 0; i < n - 1; i++) {
		sum += nums[i];
		nums[i + 1] += nums[i];
	}
	sum += nums[nums.size() - 1];
	printf("%d\n", sum);
	return 0;
}
