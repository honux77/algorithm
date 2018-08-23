#include <iostream>

using namespace std;

int d[101][101][2];

void solve() {
    d[1][0][0] = 1;
    d[1][0][1] = 1;
    for (int n = 2; n <= 100; n++) {        
        for (int k = 0; k < n; k++) {            
            d[n][k][0] = d[n - 1][k][0] + d[n - 1][k][1];
            if (k == 0) {
                d[n][k][1] = d[n - 1][k][0];
            } else {
                d[n][k][1] = d[n - 1][k - 1][1] + d[n - 1][k][0];    
            }
            
        }
    }
}

int main() {
    int a, b, n;
    cin >> n;
    solve();
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << d[a][b][0] + d[a][b][1]  << endl;
    }
    return 0;
}
