#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> a(5);
	a[3] = 10;
	auto &b = a.begin() + 3;
	cout << b[0] << endl;
	return 0;
}
