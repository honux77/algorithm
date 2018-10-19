#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
const int MAXV = 1000001;
bool visit[MAXV];

int find(int in, int out) {
	queue<int> q;
	int count = 0;
	q.push(in);
	while(true) {
		int n = q.size();
		while(n--) {
			int x = q.front();
			q.pop();
			if (x == out) {
				return count;
			}
			if (x  < 100000 && !visit[x + 1]){
				visit[x + 1] = true;
				q.push(x + 1); 
			}
			if (x > 0 && !visit[x - 1]){
				visit[x - 1] = true;
				q.push(x - 1); 
			}
			if (x * 2 <= 100000  && !visit[x * 2]){
				visit[x * 2] = true;
				q.push(x * 2); 
			}
		}
		count++;
	}
}

int main() {
    int in, out;
    cin >> in >> out;
    int ans = find(in, out);
    cout << ans << endl;
    return 0;
}
