# include <iostream>
# include <algorithm>

using namespace std;

enum Color { red = 0, green = 1, blue = 2 };
int d[1001][3];
int rgb[1001][3];

//get minimum value from previous answer
//Is there any way to improve this code? 
int minValue(int idx, Color exclude) {
	Color c1, c2;
	if (exclude == red) {
		c1 = green;
		c2 = blue;
	}
	else if (exclude == green) {
		c1 = red;
		c2 = blue;
	}
	else {
		c1 = red;
		c2 = green;
	}
	return min(d[idx][c1], d[idx][c2]);
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> rgb[i][red] >> rgb[i][green] >> rgb[i][blue];
	}

	d[1][red] = rgb[1][red];
	d[1][green] = rgb[1][green];
	d[1][blue] = rgb[1][blue];

	for (int i = 2; i <= n; i++) {
		for (int j = red; j <= blue; j++) {
			Color color = static_cast<Color>(j);
			d[i][color] = minValue(i - 1, color) + rgb[i][color];
		}
	}

	int ans = d[n][red];
	ans = d[n][blue] < ans ? d[n][blue] : ans;
	ans = d[n][green] < ans ? d[n][green] : ans;
	cout << ans << endl;
	return 0;
}
