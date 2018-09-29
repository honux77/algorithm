//https://www.acmicpc.net/problem/2750

#include <iostream>
#include <vector>

using namespace std;

void mysort(vector<int> &a) {
	int n = a.size();
	for (int i = 1; i < n; i++) {
		int v = a[i];
		int j = i - 1;		
		while (j >= 0 && v < a[j]) {
			a[j + 1] = a[j];
			j--;
		}						
		a[j + 1] = v;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);	
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];		
	}
	mysort(a);
	for (auto i : a) {
		cout << i << "\n";
	}
	return 0;
}
