#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

int findPrime(int num) {
	for (int p = 3; p < num; p+=2) {
		if (num % p == 0) return p;
	}
	return 0;
}

void stage1(vector <int> &nums, map<int, char> &ptable, int n, int l) {
	int fprime = 0, fprime2 = 0;

	for (int i = 0; i < l; i++) {
		int code;
		scanf("%d", &code);

		//step 1
		if (i == 0) {
			fprime = findPrime(code);
			fprime2 = code / fprime;
			continue;
		}

		// step 2
		else if (i == 1) {
			if (code % fprime == 0) {
				nums.push_back(fprime2);
				nums.push_back(fprime);
			}
			else {
				nums.push_back(fprime);
				nums.push_back(fprime2);
			}

			ptable[fprime] = '@';
			ptable[fprime2] = '#';
		}

		int prime = code / nums[i];
		nums.push_back(prime);
		ptable[prime] = '$';
		if (code % nums[i] != 0) {
			cout << "ERROR" << endl;
		}
	}
}

void stage2(vector <int> &nums, map <int, char> &ptable, int n, int l, string &ans) {
	char c = 'A';	
	for (auto &kv : ptable) {
		kv.second = c;
		c++;
	}
	for (auto &i : nums) {
		ans += ptable[i];
	}
}

void solve(int t) {
	string ans;
	int n, l;
	vector <int> nums;
	map<int, char> ptable;

	cin >> n >> l;
	stage1(nums, ptable, n, l);
	stage2(nums, ptable, n, l, ans);

	cout << "Case #" << t << ": " << ans << endl;	
}

int main()
{
	int tmax;
	cin >> tmax;
	for (int t = 1; t <= tmax; t++) {
		solve(t);
	}
	return 0;
}
	