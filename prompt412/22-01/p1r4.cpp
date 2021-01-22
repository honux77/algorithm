#include <cstdio>
#include <cstring>
#include <cmath>
#include <cassert>
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
using iii = tuple<int, int, int>;

int dist[1001][1001][5];
string board[1000];

int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, -1, 0, 1 };

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> board[i];

    memset(dist, -1, sizeof(dist));

    dist[0][0][4] = 0;
    deque<iii> q;
    q.emplace_back(0, 0, 4);
    
    while (!q.empty()) {
        auto [x, y, p] = q.front();
        q.pop_front();

        int d = dist[x][y][p];

        if (x == n - 1 && y == m - 1) {
            cout << d << '\n';
            return 0;
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            int cost = (i == p) ? 1 : 0;
            int nd = d + cost;

            if (nx < 0 || nx >= n || ny < 0 || ny >= m || 
                board[nx][ny] == '0' || (dist[nx][ny][i] != -1 && dist[nx][ny][i] <= nd))
                continue;
            
            dist[nx][ny][i] = nd;
            if (i == p) q.emplace_back(nx, ny, i);
            else q.emplace_front(nx, ny, i);               
        }
    }

    return 0;
}
