#include <iostream>
#include <string>

using namespace std;
int main() {	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string d, h;
	cin >> d;
	for (int i = 0; i < 5; i++) {
		cin >> h;
		if (d[0] == h[0] || d[1] == h[1]) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
	return 0;
}