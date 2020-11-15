#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

int d(int n) {
    return 2 * n % 10000;
}

int s(int n) {    
    return n == 0 ? 9999 : n - 1;    
}

int l(int n) {
    return (n % 1000) * 10 + n / 1000; 
}


int r(int n) {
    return (n % 10) * 1000 + n / 10;
}

void bfs(int a, int b) {
    queue <pair<int, string>> q;
    vector<bool> visited(10000);
    q.push(make_pair(a, ""));
    visited[a] = true;

    while(!q.empty()) {
        int t, t2;
        t = q.front().first;
        string w = q.front().second;
        q.pop();
        
        if (t == b) {
            cout << w << "\n";
            return;
        } 
        t2 = d(t);       
        if (!visited[t2]) {
            visited[t2] = true;
            q.push(make_pair(t2, w + 'D'));
        }

        t2 = s(t);       
        if (!visited[t2]) {
            visited[t2] = true;
            q.push(make_pair(t2, w + 'S'));
        }

        t2 = l(t);       
        if (!visited[t2]) {
            visited[t2] = true;
            q.push(make_pair(t2, w + 'L'));
        }

        t2 = r(t);       
        if (!visited[t2]) {
            visited[t2] = true;
            q.push(make_pair(t2, w + 'R'));        
        }
    } 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t, a , b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        bfs(a, b);
    }    
    return 0;
}
