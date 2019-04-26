#include <iostream>

using namespace std;

void check(string &ns) {
	int n = ns.size() / 2;
	for (int i = 0; i < n ; i++) {
		if (ns[i] != ns[ns.size() - i - 1]) {
			cout << "no\n";
			return;
		}
	}
	cout << "yes\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

	string ss;
	cin >> ss;
	while(ss != "0") {
		check(ss);
		cin >> ss;
	}
    return 0;
}
