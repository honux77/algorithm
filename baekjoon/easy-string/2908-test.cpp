#include <iostream>
#include <string>

using namespace std;

void my_reverse(string &s) {
	unsigned int n = s.length();
	for(int i = 0; i < n / 2; i++) {
		char t = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = t;
	}
}
int main() {
	string h = "abcdefg";
	my_reverse(h);
	cout << h << endl;
	reverse(h.begin(), h.end());
	cout << h << endl;
	return 0;
}
