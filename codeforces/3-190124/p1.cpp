#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void solution(int l1, int r1, int l2, int r2) {
	for (int i = l1; i <= r1; i++) {
		for (int j = l2; j <= r2; j++) {
			if (i != j) {
				cout << i << " " << j << endl;
				return;
			}
		}
	}
	return;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int l1, r1, l2, r2;
		cin >> l1 >> r1 >> l2 >> r2;		
		solution(l1, r1, l2, r2);			
	}	
	return 0;
}

