# include <iostream>
# include <algorithm>
using namespace std;
int d[1001][3];
int main() {
	int n;
	cin >> n;
	int r, g, b;
	for (int i = 1; i <= n; i++) {
		cin >> r >> g >> b;		
		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + r;
        d[i][1] = min(d[i - 1][0], d[i - 1][2]) + g;
        d[i][2] = min(d[i - 1][0], d[i - 1][1]) + b; 		
	}
	int ans = min({d[n][0], d[n][1], d[n][2]});	
	cout << ans << endl;
	return 0;
}