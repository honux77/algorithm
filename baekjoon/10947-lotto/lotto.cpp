#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	vector <int> lotto;
	srand(time(NULL));

	for (int i = 0; i < 45; i++) {
		lotto.push_back(i + 1);
	}

	random_shuffle(lotto.begin(), lotto.end());
	sort(lotto.begin(), lotto.begin() + 6);

    int i = 0;
    while (i < 5) {
        printf("%d ", lotto[i]);	
        i++;
    }	
	printf("%d\n", lotto[i]);
}