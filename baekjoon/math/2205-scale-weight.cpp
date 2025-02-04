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


bool is_power_of_two(int n) {
    return (n & (n - 1)) == 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> c(n + 1, 0); //copper
    vector<bool> z(n + 1, true); //copper
    
    for (int i = 1; i <= n; i++) z[i]  = true;   
    
    for (int i = n; i >= 1; i--) {       
        for (int j = n; j >= 1; j--) {
            if (z[j] && is_power_of_two(i + j)) {
                c[i] = j;
                z[j] = false;
                break;
            }
        }
    }

    for (int i = 1; i <= n; i++) cout << c[i] << "\n";
    return 0;
}
