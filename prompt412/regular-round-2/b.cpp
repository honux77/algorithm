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
    
    vector<pair<int, int>> a;
    vector<bool> child(n); 

    for (int i = 0; i < n ; i++) {
        int p, c;
        cin >> p >> c;
        a.push_back({p, c});
    }

    for (int i = 0; i < n; i++) {
        auto &curr = a[i];
        if (child[i]) continue;
        for (int j = 0; j < n; j++) {
            auto &other = a[j];
            if (curr.first < other.first && curr.second > other.second) {
                child[i] = true;
            }
            else if (curr.first > other.first && curr.second < other.second) {
                child[j] = true;
            }                            
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        if (!child[i]) ans++;
    }

    cout << ans << endl;   
    return 0;
}
