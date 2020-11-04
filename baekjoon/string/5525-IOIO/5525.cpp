#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    
    int ans = 0;

    for(int i = 0; i < s.size() - (2 * n  + 1); i++) {
        if (s[i] == 'I') {
            int p = 0;
            while (s[i + 1] == 'O' && s[i + 2] == 'I') {
                p++;
                i+=2;
            }
            if (p >= n) {
                ans += p - n + 1;             
            }
        }
    }
    
    cout << ans << "\n";
    return 0;
}
