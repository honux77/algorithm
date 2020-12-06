#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;
using ull = long long int;

char a[100][100];

void cow(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 'G') a[i][j] = 'R';
        }
    }
}
void bfs(int n) {
    vector<vector<bool>> visited(n, vector<bool>(n));
    queue<pair<int, int>> q;

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                count++;
                q.push({i, j});                
                char gc = a[i][j];                

                while (!q.empty()) {                    
                    auto curr = q.front();
                    q.pop();                    
                    int r = curr.first;
                    int c = curr.second;

                    if (r >= 0 && r < n && c >= 0 && c < n && !visited[r][c] && a[r][c] == gc) {
                        visited[r][c] = true;
                        //cout << r << c << a[r][c] << endl;
                        q.push({r - 1, c});
                        q.push({r + 1, c});
                        q.push({r, c - 1});
                        q.push({r, c + 1});
                    }
                }
            }
        }
    }
    cout << count << "\n";    
}

void bfsCow(int n) {
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<pair<int, int>> q;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    bfs(n);
    cow(n);
    bfs(n);  
    
    return 0;
}