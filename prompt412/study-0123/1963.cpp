#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

const int END = 10000;
bool prime[END];
int visit[END];


int bfs(int in, int out) {
    memset(visit, -1, sizeof(visit));
    queue<int> q;
    q.push(in);
    visit[in] = 0;
    while (!q.empty()) {
        int now = q.front();
        q.pop();
        if (now == out) return visit[now];     

        for (int i = 0; i < 4; i++) {     
            string snum = to_string(now);               
            for (int j = 0; j < 10; j++) {
                snum[i] = j + '0';
                int x = stoi(snum);
                if ( x > 1000 && prime[x] && visit[x] == -1) {
                    visit[x] = visit[now] + 1;
                    q.push(x);
                }
            }
        }        
    }
    return -1;
}

void che() {    
    memset(prime, true, sizeof(prime));
    for (int i = 2; i < END; i++) {
        if (!prime[i]) continue;        
        for(int j = i * 2; j < END; j+= i) {
            prime[j] = false;
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;    
    int ans = bfs(n, m);
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    che(); 
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
