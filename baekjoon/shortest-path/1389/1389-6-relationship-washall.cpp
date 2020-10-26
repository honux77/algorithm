#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

int a[101][101];
int d[101][101];

const int INF = 999;

void printDistance(int n, int stage) {
    cout << "======= stage " << stage << " =======\n";

    for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << d[i][j] << " ";
            }
        cout << "\n";
        }
}

int fw(int n) {
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (d[i][k] + d[k][j] < d[i][j])
                d[i][j] = d[i][k] + d[k][j];
            }
        }
        //printDistance(n, k);
    }

    int ans = 1;
    int min = INF;

    for (int i = 1; i <= n; i++) {
        int cost = 0;
        for (int j = 1; j <= n; j++) {
            cost += d[i][j];
        }
        if (cost < min) {
            min = cost;
            ans = i;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if(i == j) {
                a[i][j] = d[i][j] = 0;
            } else {
                a[i][j] = d[i][j] = INF;
            }
        }
    }

    for (int i = 0; i < m ; i++) {
        int r, c;
        cin >> r >> c;
        a[r][c] = a[c][r] = d[r][c] = d[c][r] = 1;
    }

    int ans = fw(n);

    cout << ans << "\n";
    return 0;
}