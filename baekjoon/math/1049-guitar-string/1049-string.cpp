#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<pair<int, int>> store;

    int n, m;
    cin >> n >> m;
    int mins = 1000, mino = 1000;

    for (int i = 0; i < m; i++) {
        int six, one;
        cin >> six >> one;
        mins = min(six, mins);
        mins = min(one * 6, mins);
        mino = min(one, mino);
    }

    int ans = 0;
    while(n >= 6) {
        ans += mins;
        n -= 6;
    }    
    ans += mins < n * mino ? mins: n* mino;

    cout << ans << endl;    
    return 0;
}