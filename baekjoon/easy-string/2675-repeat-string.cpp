//// https://www.acmicpc.net/problem/2675

#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; 
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		int l;
		cin >> l;
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			for (int j = 0; j < l; j++) {
				cout << s[i];
			}			
		}
		cout << endl;
	}
	return 0;
}
