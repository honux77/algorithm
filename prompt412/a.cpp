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

char ans[3][3];
int dr[] = {0, -1, 1, 0, 0};
int dc[] = {0, 0, 0, -1, 1};

void init() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> ans[i][j];
        }
    }
}

int bfs() {
    char curr[3][3];
    queue <pair<int,int>> q;

    for (int i = 0; i < 3; i ++) {
        for (int j =0; j < 3; j++) {
            curr[i][j] = '.';
            q.push({i, j});
        }
    }

    int level = 0;
    while(!q.empty()) {
        auto [row, col] = q.front();
        q.pop();

        for (int i = 0; i < 5; i++) {
        int r = row + dr[i];
        int c = col +  dc[i];
        if (r >= 0 && r < 3 && c >= 0 && c < 3) {
            curr[r][c] = curr[r][c] == '*' ? '.' : '*';
        }
    }
    }
    

    bool find = true;
    for (int i = 0; i < 3 && find; i++) {
        for (int j = 0; j < 3; j++) {
            if (ans[i][j] != curr[i][j]) find = false;            
        }
    }

    if (find) {
        total =  tot + 1;
        return;
    }    

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <3; j++) {
            bfs(curr, i, j, tot + 1);
        }
    }
}

void solve() {
    init();   
    bfs();   
    cout << total << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) 
        solve();    
    return 0;
}
