#include <iostream>
#include <stack>

using namespace std;
int main() {
	int res = 0;
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	stack<char> st;
	string p;
	cin >> p;
	bool prev = false;
	for (auto c: p) {
		if (c=='(') { 
			st.push(c);
			prev = true;
		} else if (c == ')' && prev) {
			st.pop();
			res += st.size();
			prev = false;
		} else {
			st.pop();
			res++;
			prev = false;
		}
	}
	cout << res << endl;
	return 0;
}
