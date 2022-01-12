#include <stdio.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include <math.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
#include <string>
#include <bitset>
#include <map>
#include <set>
#include <tuple>
#include <random>
#include <functional>

#define all(x) (x).begin(), (x).end()
#define xx first
#define yy second

using namespace std;

template<typename T, typename Pr = less<T>>
using pq = priority_queue<T, vector<T>, Pr>;
using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

void solve() {
    int n;
    cin >> n;
    int w = 0;
    while (n--) {
        char p1, p2;
        cin >> p1 >> p2;        
        if (p1 == p2) continue;
        if (p1 == 'R' && p2 == 'S') w++;
        if (p1 == 'R' && p2 == 'P') w--;
        if (p1 == 'S' && p2 == 'P') w++;
        if (p1 == 'S' && p2 == 'R') w--;
        if (p1 == 'P' && p2 == 'R') w++;
        if (p1 == 'P' && p2 == 'S') w--;
    }    
    if (w > 0) cout << "Player 1\n";
    else if (w < 0) cout << "Player 2\n";
    else cout << "TIE\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--) {        
        solve();
    }    
    return 0;
}
