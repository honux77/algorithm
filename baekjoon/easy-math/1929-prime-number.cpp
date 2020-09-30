#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;
using i64 = long long int;

int MAX = 1000000;

void che(char * a) {
	a[1] = 1;
	for (int i = 2; i < MAX; i++) {
		if (a[i] == 1) continue;
		
		for (int j = i * 2; j < MAX; j+= i) {
			a[j] = 1;
		}
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
	char * a = new char[MAX]();
    int m, n;
    cin >> m >> n;
	
	che(a);
	
    for (int i = m; i <= n; i++) {
		if (a[i] == 0) {
			cout << i << "\n";
		}
	}
    return 0;
}