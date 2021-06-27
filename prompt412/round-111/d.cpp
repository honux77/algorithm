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

double g[4][4];
double d[4][11];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t, n;
    char a, b;
    double w;
    cin >> t >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> w;
        g[a - 'A'][b - 'A'] = w;
    }

    d[0][0] = d[1][0] = d[2][0] = d[3][0] = 0.25;
    for (int k = 1; k <= t; k++) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                d[j][k] += d[i][k - 1] * g[i][j];
            }
        } 
    }   

    for (int i = 0; i < 4; i++) {
        printf("%.2f\n", d[i][t] * 100);
    }
    return 0;
}
