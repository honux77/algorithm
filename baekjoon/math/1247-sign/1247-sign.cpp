#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using ll = long long;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 3;
    while (t--) {
        int n;
        cin >> n;
        __int128_t sum = 0;
        while (n--) {
            ll num;
            cin >> num;
            sum += num;
        }
        if (sum == 0) cout << "0\n";
        else if (sum > 0) cout << "+\n";
        else cout << "-\n";
    }    
    return 0;
}
