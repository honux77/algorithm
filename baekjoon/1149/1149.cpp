# include <iostream>
# include <algorithm>

using namespace std;

enum Color {red, green, blue};
int d[1001][3];
int rgb[1001][3];

int minValue(int idx, Color exclude) {
	if (idx == 0) {
		return 0;
	}

	int res = 98764321;

	for (int c = red; c <= blue; c++) {
		if (c != exclude) {
			res = min(res, d[idx][c]);
		}
	}
	return res;
}

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> rgb[i][red] >> rgb[i][green] >> rgb[i][blue];		
		for (int j = red; j <= blue; j++) {
			Color color = static_cast<Color>(j);
			d[i][color] = minValue(i - 1, color) + rgb[i][color];
		}
	}

	int ans = min({d[n][red], d[n][blue], d[n][green]});
	cout << ans << endl;
	return 0;
}
