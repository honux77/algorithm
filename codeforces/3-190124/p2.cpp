#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, num1 = 1, num2 = 1;
	cin >> n;


	map<int, int, greater<int>> nums;

	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		nums[p]++;
		num1 = max(num1, p);
	}

	for (int i = 1; i <= num1; i++) {
		if (num1 % i == 0) {
			nums[i]--;
		}
	}
	
	for (auto &nn : nums) {
		if (nn.second != 0) {
			num2 = nn.first;
			break;
		}
	}

	cout << num1 << " " << num2 << endl;
	return 0;
}

