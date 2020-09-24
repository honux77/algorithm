#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;
using i64 = long long int;

bool checkGenerator(int a, int b) {
    int sum = a;
    while (a != 0) {
        int d = a % 10;
        a /= 10;
        sum += d;
    }
    if (sum == b) {
        return true;
    }
    return false;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
        if (checkGenerator(i, n)) {
            cout << i << endl;
            return 0; 
        }        
    }
    cout << 0 << endl;
    return 0;
}