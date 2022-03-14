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

int bsearch(vector<int> &a, int x, int l, int r) {    
    while (l <= r) {
        int i = (l + r) / 2;
        if (x == a[i]) return (i + 1);
        else if (x > a[i] && x < a[i + 1]) return (i + 1);
        else if (x > a[i]) l = i + 1;
        else r = i - 1;        
    }
    return l + 1;    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> a(n + 1);    
    a[0] = 1;

    for(int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        a[i] = a[i - 1] + t;       
    }    

    int c;
    cin >> c;
    for (int i = 0; i < c; i++) {
        int x;
        cin >> x;
        cout << bsearch(a, x, 0, n) << "\n"; 
    }
    
    return 0;
}
