//https://www.acmicpc.net/problem/1316

#include <iostream>
#include <set>

using namespace std;

int check(string s) {
	set<char> cs;
	
	cs.insert(s[0]);

	for(int i = 1; i < s.length(); i++) {
		if (s[i] == s[i - 1]) {
			continue;
		}
		if (cs.find(s[i]) == cs.end()) {
			cs.insert(s[i]);
		} else {
			return 0;
		}
	}
	return 1;
}

int main() {
    int n, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		count += check(s);
    };
	cout << count << endl;
    return 0;
}
