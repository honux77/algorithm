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

void init(vector<int> &pre, vector<int> &ino) {
    pre.clear();
    ino.clear();
}

int findRoot(vector<int> &pre, vector <int> &ino) {
    for (auto &v: pre) {
        if (find(ino.begin(), ino.end(), v) != ino.end()) {
            return v;
        }
    }
    return -1;
}
void postorder(int root, vector<int> &pre, vector<int> &ino) {   
    auto it = find(ino.begin(), ino.end(), root);
    vector<int> left(ino.begin(), it);
    vector<int> right(it + 1, ino.end());
    if (!left.empty()) postorder(findRoot(pre, left), pre, left);
    if (!right.empty()) postorder(findRoot(pre, right), pre, right);
    cout << root << " ";
}

void solve() {    
    vector<int> preorder;
    vector<int> inorder;
    init(preorder, inorder);

    int n,  v;    
    cin >> n;
    for (int i = 0; i < n; i++) {        
        cin >> v; 
        preorder.push_back(v);
    }
    for (int i = 0; i < n; i++) {        
        cin >> v; 
        inorder.push_back(v);
    }
    int root = preorder[0];
    postorder(root, preorder, inorder);    
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
