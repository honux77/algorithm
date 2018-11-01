# include <iostream>
# include <algorithm>
using namespace std;
int d[1001][3];
int main() {
	int n;
	cin >> n;
	int rgb[3];
	for (int i = 1; i <= n; i++) {
		cin >> rgb[0] >> rgb[1] >> rgb[2];		
		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + rgb[0];
        d[i][1] = min(d[i - 1][0], d[i - 1][2]) + rgb[1];
        d[i][2] = min(d[i - 1][0], d[i - 1][1]) + rgb[2]; 		
	}
	int ans = min({d[n][0], d[n][1], d[n][2]});
	cout << ans << endl;
	return 0;
}