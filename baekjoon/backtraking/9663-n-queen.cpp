#include <iostream>
#include <cstdlib>

int board[15];
int n, total;

using namespace std;

void nq(int row, int col) {
	board[row] = col;
	if (row == n - 1) {
		total += 1;
		return;
	}
	
	//call nq(row + 1, i)
	for (int i = 0; i < n; i++) {
		bool valid = true;
		for (int j = 0; j <= row; j++) {
			if (board[j] == i || row + 1 - j == abs(i - board[j])){
				valid = false;
				break;
			}
		}
		if (valid) {
			nq(row + 1, i);
		}
	}
}

int main() {	
	cin >> n;
	for (int i = 0; i < n; i++) {
		nq(0, i);
	}

	cout << total << endl;
	return 0;
}