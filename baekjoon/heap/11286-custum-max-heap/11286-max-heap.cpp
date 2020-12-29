#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;

struct myless
{
    bool operator()(const int& v1, const int& v2)
    {
        int a1 = abs(v1);
        int a2 = abs(v2);
        if (a1 != a2) return a1 > a2;
        return v1 > v2;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue<int, vector<int>, myless> mheap;
    
    int t;    
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        if (n != 0) {
            mheap.push(n);
        } else if (mheap.size() != 0) {
            cout << mheap.top() << "\n";
            mheap.pop();
        } else {
            cout << "0\n";
        }
    }
    return 0;
}