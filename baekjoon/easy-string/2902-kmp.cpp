#include <iostream>
#include <string>

using namespace std;
int main() {
	string s;
	cin >> s;
	for(auto c: s) {
		if (c >= 'A' && c <= 'Z') cout << c;
	}
	cout << "\n";
	return 0;
}