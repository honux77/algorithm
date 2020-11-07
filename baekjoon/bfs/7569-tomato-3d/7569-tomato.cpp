#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
using ull = long long int;

//m: max col, n: max row, h: max height
//1: apple: 0: raw -1: none

int a[100][100][100];
const int dr[] = {-1, 1, 0, 0, 0,0};
const int dc[] = {0, 0, -1, 1, 0 ,0};
const int dh[] = {0, 0, 0, 0, -1, 1}; 
 
struct Point {
    int i;
    int j;
    int k;
};

void bfs(queue<Point> &q, int n, int m, int h) {
    while (!q.empty()) {
        auto [pi, pj, pk] = q.front();
        q.pop();        

        for (int i =0; i < 6; i++) {
            int ni = pi + dr[i];
            int nj = pj + dc[i];
            int nk = pk + dh[i];
            if (ni < 0 || ni >= n || nj < 0 || nj >= m || nk < 0 || nk >= h) continue;
            if (a[ni][nj][nk] == -1 || a[ni][nj][nk] > 0) continue;            
            a[ni][nj][nk] = a[pi][pj][pk] + 1;
            q.push({ni, nj, nk});
        }        
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m, n, h;
    cin >> m >> n >> h;

    queue<Point> q;


    for (int k = 0; k < h; k++) {
        for (int i = 0; i < n; i ++) {
            for (int j = 0; j < m; j++) {                
                cin >> a[i][j][k];
            }
        }
    }

    for (int k = 0; k < h; k++) {
        for (int i = 0; i < n; i ++) {
            for (int j = 0; j < m; j++) {
                if(a[i][j][k] == 1) q.push({i, j, k});
            }
        }
    }

    bfs(q, n, m, h);
    int ans = 0;

    for (int k = 0; k < h; k++) {
        for (int i = 0; i < n; i ++) {
            for (int j = 0; j < m; j++) {                
                if (a[i][j][k] == 0) {
                    cout << -1 << "\n";
                    return 0;
                }                
                ans = max(ans, a[i][j][k]);                                
            }            
        }
    }

    cout << ans - 1 << "\n";
    return 0;
}