#include <bits/stdc++.h>

using namespace std;
using ull = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;    
    while (t--) {
        string x;
        cin >> x;
        int d = x[0] - '0' - 1;
        int l = x.size();
        cout << d * 10 + l * (l + 1) / 2 << "\n";
    }
    
    return 0;
}