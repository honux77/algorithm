//https://www.acmicpc.net/problem/4673

#include <iostream>

int self[10001];

using namespace std;

int next(int n) {
    int ret = n;

    while(n != 0) {
        ret += n % 10;
        n /= 10;
    }
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for (int i = 1; i <= 10000; i++) {
        if (self[i] == 1) {
            continue;
        }        
        int j = i;
        while (j <= 10000) {
            j = next(j);
            if (j <= 10000) {
                self[j] = 1;
            }
        }
    }

    for (int i = 1; i <= 10000; i++) {
        if (self[i] == 0) {
            cout << i << "\n";
        }
    }
    return 0;
}