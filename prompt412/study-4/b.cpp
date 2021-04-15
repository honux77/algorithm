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

int gcd(int a, int b) {
    while(b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector <int> a(n);
    vector <int> d(n - 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for (int i = 0; i < n - 1; i++) {
        d[i] = a[i + 1] - a[i];
    }

    int g = d[0];
    for (int i = 1; i < n - 1; i++) {
        g = gcd(g, d[i]);
    }

    vector<int> ans;
    for (int i = 2; i * i <= g; i++) {
        if (g % i == 0) {
            cout << i << " ";
            ans.push_back(g / i);
        }
    }
    
    reverse(ans.begin(), ans.end());
    for (auto &i: ans) {
        cout << i << " ";
    }
    cout << g <<"\n";
    return 0;
}
