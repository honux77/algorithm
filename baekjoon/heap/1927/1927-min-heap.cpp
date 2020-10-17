#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
using ull = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    priority_queue<int, vector<int>, greater<int>> q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num == 0) {
            if (q.size() == 0) {
                cout << "0\n";
            } else {
                cout << q.top() << "\n";
                q.pop();
            }
        } else {
            q.push(num);
        }
    }
    return 0;
}