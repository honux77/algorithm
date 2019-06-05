#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <map>

using namespace std;

int check(int curr, int ch, map<int,bool> &wnum) {
	int num = curr;
	int count = 0;
	do {
		int d = num % 10;
		num /= 10;
		count++;
		if (wnum[d]) return 500000;
	} while (num != 0);
	//printf("%d %d", curr, count);
	return count + abs(
		ch - curr);
}

int main() {
	int ch, n;
	map<int, bool> wnum;
	scanf("%d %d", &ch, &n);
	for (int i = 0; i < n; i++) {
		int w;
		scanf("%d", &w);
		wnum[w] = true;
	}
	
	int ans = abs(ch - 100);
	for (int i = 0; i < 999999; i++) {
		ans = min(ans, check(i, ch, wnum));
	}
	printf("%d\n", ans);
	return 0;
}