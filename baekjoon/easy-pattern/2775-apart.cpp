#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;
using i64 = long long int;

int a[15][15];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
	cin >> t;
	
	while (t--) {
		int n, k;
		cin >> n >> k;
		for (int i = 1; i <= k; i++) {
			a[0][i] = i;
		}

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= k; j++) {
				a[i][j] = a[i][j - 1] + a[i - 1][j];
				//cout << i << "," << j << " = " << a[i][j] << endl;
			}
		}
    	cout << a[n][k] << endl;
	}
    return 0;
}
