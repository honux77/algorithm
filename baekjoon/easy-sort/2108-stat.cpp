#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
using i64 = long long int;

int main()
{
	int n, k, isum = 0;
	int nmax = 5000, nmin = -5000, mfCount=0;
	scanf("%d", &n);
	map<int, int> numCount;
	vector<int> nums;
	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		nums.push_back(k);
		numCount[k]++;
		mfCount = max(mfCount, numCount[k]);		
		isum += k;
	}
	sort(nums.begin(), nums.end());
	printf("%.0f\n", (double)isum / n); //avg
	printf("%d\n", nums[n / 2]); //middle value

	vector<int> fvalues;
	int mfvalue;
	for (auto &kv : numCount) {
		if (kv.second == mfCount)
			fvalues.push_back(kv.first);
	}

	if (fvalues.size() > 1) {
		sort(fvalues.begin(), fvalues.end());
		mfvalue = fvalues[1];
	}
	else {
		mfvalue = fvalues[0];
	}	

	printf("%d\n", mfvalue);
	printf("%d\n", nums[n - 1] - nums[0]);

	return 0;
}
