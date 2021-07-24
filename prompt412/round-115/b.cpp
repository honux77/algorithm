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
    
    int n, m, r, g, b;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> r >> g >> b;
            char c;
            int i = 2126 * r + 7152 * g + 722 * b;
            if (i < 510000) c = '#';
            else if (i < 1020000) c = 'o';
            else if (i < 1530000) c = '+';
            else if (i < 2040000) c = '-';
            else c = '.';
            cout << c;
        }
        cout << "\n";
    }
    return 0;
}
