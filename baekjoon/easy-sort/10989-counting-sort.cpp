#include <iostream>

int a[10001];

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	while(n--) {
		int num;
		cin >> num;
		a[num]++;
	}

	for(int i = 1; i <= 10000; i++) {
		if (a[i] == 0) {
			continue;
		}
		for (int j = 0; j < a[i]; j++) {
			cout << i << "\n";
		}
	}
	return 0;
}
