# include <iostream>
# include <vector>
# include <algorithm>


using namespace std;


int main() {
	vector <int> lotto;
	int i;
	for (i = 0; i < 45; i++) {
		lotto.push_back(i + 1);
	}

	random_shuffle(lotto.begin(), lotto.end());
	sort(lotto.begin(), lotto.begin() + 6);

	for (i = 0; i < 5; i++) {
		printf("%d ", lotto[i]);		
	}
	printf("%d\n", lotto[i]);
    return 0;
}