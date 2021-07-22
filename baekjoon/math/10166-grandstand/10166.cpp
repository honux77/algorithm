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


int a[2001][2001];
int scount = 0;

int gcd(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;        
    }
    return a;
}

void add(int n) {
    for (int i = 1; i < n; i++) {
        int g = gcd(i, n);            
        if (a[i / g][n / g] != 1) {
            scount++;            
            a[i / g][ n / g] = 1;            
        }
    }    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = a; i <= b; i++) {
        add(i);
    }    
    cout << scount + 1<< endl;
    return 0;
}
