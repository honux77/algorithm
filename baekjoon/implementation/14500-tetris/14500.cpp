#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

int t[19][3][2] = {
    //line
    {{0, 1}, {0, 2}, {0, 3}},
    {{1, 0}, {2, 0}, {3, 0}},
    //square
    {{0, 1}, {1, 0}, {1, 1}},    
    //l1
    {{1, 0}, {2, 0}, {2, 1}},
    {{1, 0}, {0, 1}, {0, 2}},
    {{0, 1}, {1, 1}, {2, 1}},
    {{0, 1}, {0, 2}, {-1, 2}},
    //l2
    {{1, 0}, {2, 0}, {2, -1}},
    {{1, 0}, {1, 1}, {1, 2}},
    {{1, 0}, {2, 0}, {0, 1}},
    {{0, 1}, {0, 2}, {1, 2}},
    //snake
    {{1, 0}, {1, 1}, {2, 1}},
    {{0, 1}, {-1, 1}, {-1, 2}},
    {{1, 0}, {1, -1}, {2, -1}},
    {{0, 1}, {1, 1}, {1, 2}},
    //t
    {{1, 0}, {2, 0}, {1, 1}},
    {{0, 1}, {0, 2}, {1, 1}},
    {{1, 0}, {1, -1}, {2, 0}},
    {{0, 1}, {0, 2}, {-1, 1}}
};

int a[502][502];
int ans = 0;

void getMax(int u, int v, int n, int m) {
    int r;
    int c;
    int maxSum = 0;
    
    for (int i = 0; i < 19; i++) {
        int s = a[u][v];
        //printf("%d %d %d %d\n", u, v, a[u][v], s);
        bool out = false;
        for (int j = 0; j < 3; j++) {            
            r = u + t[i][j][0];
            c = v + t[i][j][1];
            if (r < 0 || r > n || c < 0 || c > m) {
                out = true;
                break;            
            }
            s += a[r][c];
            //printf("%d %d %d %d\n", r, c, a[r][c], s);
        }
        if (!out) ans = max(ans, s);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            getMax(i, j, n, m);
        }
    }
    
    cout << ans << endl;
    return 0;
}