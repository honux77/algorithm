#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    priority_queue<ii, vector<ii>, greater<ii>> pq;
    pq.push({1, 2});
    pq.push({1, 3});
    pq.push({3, 5});
    pq.push({3, 4});
    pq.push({6, 0});
    pq.push({7, 0});
    pq.push({4, 2});
    pq.push({2, 5});

    while (!pq.empty()) {
        auto x = pq.top();
        pq.pop();
        cout << x.first << "," << x.second << endl;
    }    
    return 0;
}