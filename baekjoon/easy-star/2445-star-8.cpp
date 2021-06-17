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


void p(int n, char c) {
    for (int i = 0; i < n; i++) {
        cout << c;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {        
        p(i, '*');
        p((n - i) * 2, ' ');
        p(i, '*');
        cout << endl;
    }

    for (int i = n - 1; i > 0; i--) {        
        p(i, '*');
        p((n - i) * 2, ' ');
        p(i, '*');
        cout << endl;
    }   
    return 0;
}
