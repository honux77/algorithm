# include <iostream>
# include <string>
# include <cstdio>

using namespace std;

char buffer[1000000];

int main() {
	scanf("%s", buffer);
	string bin(buffer);

	while (bin.length() % 3 != 0) {
		bin.insert(0, "0");
	}
		
	for (int i = 0; i < bin.length(); i+= 3) {
		int v = (bin[i] - '0') * 4 + (bin[i + 1] - '0') * 2 + (bin[i + 2] - '0') * 1;
		printf("%d", v);
	}		
	
	printf("\n");
	return 0;
}