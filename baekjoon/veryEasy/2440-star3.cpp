# include <iostream>
# include <cstdio>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = n; i >= 1; i--) {		
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}