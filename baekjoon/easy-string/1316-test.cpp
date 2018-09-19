#include <iostream>
#include <string>

using namespace std;

int main() {
	string s = "hello";
	for(char c: s) {
		cout << c;
	}
	cout << endl;
	return 0;
}

