#include <stdio.h>
#include <string.h>
#include <math.h>
#include <assert.h>
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

bool lucky(int n) {
    string s = to_string(n);
    bool ret = true;
    for (auto c: s) {
        if (c != '4' && c != '7') {
            ret = false;
            break;
        }
    }
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a;
    for (int i = 1; i <= 1000; i++) {
        if (lucky(i)) {
            a.push_back(i);
        }
    }

    int n;
    cin >> n;
    bool l = false;
    for (auto i: a) {
        if (n % i == 0) {
            cout << "YES\n";
            return 0;    
        }
    }
    
    cout << "NO\n";
    return 0;
}
