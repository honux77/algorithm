//https://www.acmicpc.net/problem/11057
#include <iostream>

using namespace std;

int d[1001][10];

int main() {
    int n;
    int mod = 10007;
    int sum = 0;
    cin >> n;

    for (int i = 0; i <= 9; i++) {
        d[1][i] = 1;
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = j; k <= 9; k++) {
                d[i][k] = (d[i][k] + d[i - 1][j]) % mod;
            } 
        }
    } 

    for (int i = 0; i <= 9; i++) {
        sum =  (sum + d[n][i]) % mod;
    }   
    cout << sum;
    return 0;
}