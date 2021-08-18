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

int a[101][101];
int dx[] = {1, 0, -1 , 0};
int dy[] = {0, 1, 0, -1};

int main()
{    
    int n, m;
    scanf("%d %d", &n, &m);
    int t = n * m;
    int x = 0;
    int y = 0;
    int u = 0;
    int v = 0;
    int c = 0;
    
    while (t > 0) {
        a[y][x] = t;
        int x2 = x + dx[u];
        int y2 = y + dy[v];
        if (x2 < 0 || x2 >= m || y2 < 0 || y2 >= n || a[y2][x2] > 0)  {
            c++;
            u = (u + 1) % 4;
            v = (v + 1) % 4;
        }
        x += dx[u];
        y += dy[v];
        t--;
    }
    printf("%d\n", c - 1);    
    return 0;
}
