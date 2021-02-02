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

bool a[33000];

void che() {
    memset(a, true, sizeof(a));

    for (int i = 2; i < 33000; i++) {
        if (!a[i]) continue;
        for (int j = i * 2; j < 33000; j += i) {
            a[j] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    che();

    int n;
    while(true) {
        int count = 0;
        cin >> n;
        if (n == 0) break;
        for (int i = 2; i <= n / 2; i++) {
            int j = n - i;
            if (a[i] && a[j]) count++;
        }
        cout << count << "\n";
    }
    return 0;
}
