#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;
const int H = 51;
const int W = 51;

int a[H][W];

int check(int n, int m, int i, int j) {    
    if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] == 0) return 0;    
    a[i][j] = 0;
    check(n, m, i + 1, j);
    check(n, m, i - 1, j);
    check(n, m, i, j + 1);
    check(n, m, i, j - 1);
    return 1;
}

void solve()
{
    int n, m, k;
    cin >> m >> n >> k;    

    for (int i = 0; i < n ; i++)    
        for (int j = 0; j < m; j++)        
            a[i][j] = 0;

    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        a[y][x] = 1;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ans += check(n, m, i , j);            
        }
    }

    cout << ans << "\n";  
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    return 0;
}