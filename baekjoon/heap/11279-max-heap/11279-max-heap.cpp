#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
using ull = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    priority_queue<int, vector<int>, less<int>> mh;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 0) {
            if (mh.empty()) {
                cout << "0\n";
            } else {
                cout << mh.top() << "\n";
                mh.pop();
            }
        }
        else {
            mh.push(x);
        }
    }
    return 0;
}
