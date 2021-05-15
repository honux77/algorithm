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
    vector<ii> v;
    for (int i = 0; i < 4; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    int idx = 0;
    int x1, x2, y1, y2;        
    double ans = 0;

    x1 = v[0].first;
    y1 = v[0].second;
    v.erase(v.begin());
    for (int i = 0; i < 3; i++) {                
        int dist = 100;
        for (int i = 0; i < v.size(); i++) { 
            x2 = v[i].first;
            y2 = v[i].second;     
            //cout << i << x1 << x2 << y1 << y2 << endl;
            int d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
            if (d < dist) {
                idx = i;
                dist = d;
            }
        }

        //cout << i << ", " << dist << endl;
        x1 = v[i].first;
        y1 = v[i].second;
        ans += sqrt(dist);
        
        v.erase(v.begin() + i);
    }    
    
    cout << (int) ans << endl;
    return 0;
}
