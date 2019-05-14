#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int d[1001];

bool isSorted(vector<int> a, int idx) {
	a.erase(a.begin() + idx);
	for (unsigned int i = 1; i < a.size(); i++) {
		if (a[i - 1] > a[i]) return false;
	}
	return true;
}

int main() {
	int n;
	scanf("%d", &n);
	vector <int> a(n);

	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		a[i] = x;
	}
	
	int ret = 0;
	for (int i = 0; i < n; i++) {
		if (isSorted(a, i)) {
			ret++;
		}
	}
	printf("%d\n", ret);	
	return 0;
}
