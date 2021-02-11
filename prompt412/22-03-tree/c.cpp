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


vector<int> pre;
vector<int> ino;

void init() {
    pre.clear();
    ino.clear();
}

void postorder(int pl, int il, int size) {    
    int root = pre[pl];
    int idx = il;
    for(; idx < il + size; idx++) {
        if (ino[idx] == root) break;
    }
    int lsize = idx - il;
    int rsize = size - lsize - 1;
    if (lsize > 0) postorder(pl + 1, il, lsize);
    if (rsize > 0) postorder(pl + lsize + 1, idx + 1, rsize);
    
    cout << root << " ";
}

void solve() {        
    init();

    int n,  v;    
    cin >> n;
    for (int i = 0; i < n; i++) {        
        cin >> v; 
        pre.push_back(v);
    }
    for (int i = 0; i < n; i++) {        
        cin >> v; 
        ino.push_back(v);
    }    
    postorder(0, 0, n);    
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
