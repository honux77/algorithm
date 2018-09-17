#include <iostream> 

using namespace std;

int main() {
	int sum = 0, n = 5;
	
	for (int i = 0; i < n; i++) {
		int score;
		cin >> score;
		if (score > 40) {
			sum += score;
		} else {
			sum += 40;
		}
	}
	cout << (sum / n) << endl;
	return 0;
}
