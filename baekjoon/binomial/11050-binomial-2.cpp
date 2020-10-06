#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;
using ull = unsigned long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ull n, k, ans;
    ans = 1;
    cin >> n >> k;

    for (ull i = 2; i <= n; i++) {
        ans *= i;
    }

    for (ull i = 2; i <= n - k; i++) {
        ans /= i;
    }

    for (ull i = 2; i <= k; i++) {
        ans /= i;
    }

    cout << ans << endl;
    return 0;
}