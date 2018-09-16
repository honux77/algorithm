#include <iostream>

using namespace std;

int d[11];

int solve(int n) {
    if (d[n] == 0) {
        d[n] = solve(n - 1) + solve(n - 2) + solve(n - 3);
    }
    return d[n];
}
int main() {
    d[1] = 1;
    d[2] = 2;
    d[3] = 4;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        cout << solve(k) << endl;
    }
    
    return 0;
}