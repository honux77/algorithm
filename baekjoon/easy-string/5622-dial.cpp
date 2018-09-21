#include <iostream> 
#include <string>
#include <algorithm>

using namespace std;

int d[] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 
	9, 9, 9, 10, 10, 10, 10};

int main() {
	string s;
	cin >> s;
	int sum = 0;

	for (char c: s) {
		int n = d[c - 'A'];
		sum += n;
	}

	cout << sum << endl;
	return 0;
}
