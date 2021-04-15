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

int a[100];
set<int> nums;

int gcd(int a, int b) {
    while(b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

void solve(int n, int m) {
    for (int i = 0; i < m; i++) {
        int g = m - i;
        for (int j = 0; j < n; j++) {
            g = gcd(m - i, a[j] - i);
        }        
        //cout << i << ", " << g << endl;
        if (g != 1) nums.insert(g);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int m = 2000000000;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m = min(a[i], m);
    }

    solve(n, m);
    for (auto &i: nums) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
