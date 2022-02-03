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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0;i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    int currSum, minSum;
    
    
    for (int i = 0; i < k; i++) {
        currSum += a[i];
    }
    minSum = currSum;

    for (int i = 1; i <= n - k; i++) {
        currSum = currSum - a[i - 1] + a[i + k - 1];        
        if (currSum < minSum) {            
            ans = i;
            minSum = currSum;
        }
    }
    
    cout << ans + 1<< endl;
    return 0;
}
