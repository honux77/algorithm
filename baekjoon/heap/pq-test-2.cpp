#include <cstdio>
#include <cstring>
#include <cmath>
#include <cassert>
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

template<typename T, typename Le = less<T>>
using maxheap = priority_queue<T, vector<T>, Le>;
template<typename T, typename Ge = greater<T>>
using minheap = priority_queue<T, vector<T>, Ge>;

using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;
using iii = tuple<int, int, int>;

struct info {
    int t;
    int w;
    bool operator < (const info &o) const {
        return w > o.w;
        //return w < o.w; max heap;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    priority_queue<info> pq;
    pq.push({1, 1});
    pq.push({1, 2});
    pq.push({2, 2});
    pq.push({2, 3});
    pq.push({3, 2});
    pq.push({6, 0});
    pq.push({0, 6});

    while(!pq.empty()) {
        auto x = pq.top();
        pq.pop();
        cout << x.t << ", " << x.w << endl;
    }
    
    return 0;
}