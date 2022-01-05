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
    
    string s;
    cin >> s;
    
    bool caps = true;

    for (int i = 1; i < s.length(); i++) {
        if ('a' <= s[i] && s[i] <= 'z') {
            caps = false;
            break;
        }
    }

    if (caps) {
        string ans = "";
        for (auto &c: s) {
            if (islower(c)) {
                ans  += toupper(c);
            } else {
                ans += tolower(c);
            }
        }
        cout << ans << endl;
    } else {
        cout << s << endl;
    }
    return 0;
}
