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
    string d = "0123456789ABCDEF";
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m, n;
    cin >> m >> n;
    vector<int> a;

    if (m == 0) {
        cout << "0\n";
        return 0;
    }
    while(m != 0) {        
        a.push_back(m % n);
        m = m / n;
    }

    reverse(a.begin(), a.end());
    for (auto i: a) {
        cout << d[i];
    }

    cout << "\n";    
    return 0;
}
