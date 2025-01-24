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
    
    int n, m;
    cin >> n >> m;

    vector<pair<int,int>> s(n);

    for (int i = 0; i < n; i++)
        cin >> s[i].first >> s[i].second;
    
    //desc sort by first element of pair
    sort(s.begin(), s.end(), greater<pair<int,int>>());
    
    int d = 0;
    int sec = s[0].second;
    for (int i = 0; i < m; i++) {
        d += s[i].first;
        sec = min(sec, s[i].second);    
    }

    cout << d << " " << sec << endl;
    return 0;
}
