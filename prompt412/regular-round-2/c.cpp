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
    
    int k, c, m;
    cin >> k >> c >> m;
    int p = 1;
    int money = 0;    
    int t = 0;

    while(money < m) {
        t++;        
        money += p * k; 
        if(money >= m) break;

        int rt1 = ceil((double)(m - money) / p / k);
        int rt2 = ceil((double)(m + c - money) / (p + 1) / k);        
        if (money >= c && rt2 < rt1) {
            p++;
            money -= c;
        }
    }
    cout << t << endl;
}
