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

i64 ans = 987654321;
i64 score[300005];
i64 boss[300005];
i64 curr[300005];
bool visit[300005];

void dfs(int n, i64 c) {
    if (visit[n] && curr[n] > c) return;
    
    c += score[n]; 
    curr[n] = c;
           
    ans = min(ans, c);
    if (n == 1) return;
    dfs(boss[n], c);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    for (int i = 1; i <= n ; i++) {
        cin >> score[i];    
        curr[i] = score[i];    
    }

    for (int i = 2; i <= n ; i++) {
        cin >> boss[i];
    }
    
    for (int i = 1; i <= n; i++) {
        dfs(i, 0);
    }

    cout << ans << endl;
    
    return 0;
}
