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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> coins(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
        sum += coins[i];
    }
    
    int mid = sum / 2;
    sort(all(coins), greater<int>());
    int ans = 0;
    for (int i = 0, sum = 0; i < n; i++) {
        sum += coins[i];
        ans++;
        if (sum > mid) {
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
