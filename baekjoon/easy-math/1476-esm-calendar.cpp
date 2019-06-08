#include <iostream>

using namespace std;

int main() {
	int e, s, m;
	int emax = 15;
	int smax = 28;
	int mmax = 19;
	int i, j, k, count;
	i = j = k = count = 1;
	cin >> e >> s >> m;
	while (!(i == e && j == s && k == m)) {
		i++;
		j++;
		k++;
		count++;
		if (i > emax) i = 1;
		if (j > smax) j = 1;
		if (k > mmax) k = 1;
	}
	cout << count << "\n";
	return 0;
}
