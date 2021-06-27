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

void solve(double m, double a, double b) {
    int t = round((m / a - m / b) * 3600);
    int ss = t % 60;
    int mm = t / 60 % 60;
    int h = t / 3600; 
    printf("%01d:%02d:%02d\n", h, mm, ss);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    while (1) {
        int m, a, b;
        cin >> m >> a >> b;
        if (m == 0 && a == 0 && b == 0) break;
        solve(m, a, b);
    }
    return 0;
}
