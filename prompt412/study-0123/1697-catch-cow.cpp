#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
const int MAXV = 1000001;
int visit[MAXV];

int find(int in, int out) {
    memset(visit, -1, sizeof(visit));
	queue<int> q;
	q.push(in);
    visit[in] = 0;

	while(!q.empty()) {
	    int x = q.front();
		q.pop();
		if (x == out) return visit[out];
		
		if (x  < 100000 && !visit[x + 1]){
			visit[x + 1] = visit[x] + 1;
				q.push(x + 1); 
			}
        if (x > 0 && !visit[x - 1]){
            visit[x - 1] = visit[x] + 1;
            q.push(x - 1); 
        }
        if (x * 2 <= 100000  && !visit[x * 2]){
            visit[x * 2] = visit[x] + 1;
            q.push(x * 2); 
        }	
	}
    return -1;
}

int main() {
    int in, out;
    cin >> in >> out;
    int ans = find(in, out);
    cout << ans << endl;
    return 0;
}