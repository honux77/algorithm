#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	int n1 = stoi(a);
	int n2 = stoi(b);
	int res = n1 > n2 ? n1: n2;
	cout << res << endl;
	return 0;
}
