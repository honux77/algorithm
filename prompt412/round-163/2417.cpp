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

template <typename T, typename Pr = less<T>>
using pq = priority_queue<T, vector<T>, Pr>;
using ull = unsigned long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ull n;
    cin >> n;
    ull x = ceil(sqrt(n));
    cout
        << x << "\n";
    cout << x * x << endl;
    cout << n << endl;

    return 0;
}
