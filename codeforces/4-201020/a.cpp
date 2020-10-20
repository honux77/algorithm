#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
using ull = long long int;

int dcount(int n) {
    int ans = 0;
    while (n != 0) {
        ans++;
        n /= 10;
    }
    return ans;
}

int next(int num, int d) {
    return num * 10 + d;
}

void solve() {
    int n;
    cin >> n;
    int s = 1;
    int e = 9999;
    int ans = dcount(n);
    int d = 0;
    while (d != n) {        
        d = s;
        while (d <= e && d != n) {
            ans += dcount(d);
            d = next(d, s);                  
        }        
        s++;
    }
    cout << ans << "\n";     
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string s;
    cin >> n;    
    for (int i = 0; i < n; i++)    
        solve();    
    return 0;
}