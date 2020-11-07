#include <iostream>
#include <algorithm>

using namespace std;
using ull = long long int;

string pstr(int n) {
    string o = "IO";
    string ans = "";
    for (int i = 0; i < n; i++) {
        ans += o;
    }
    return ans + "I";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, l;
    int ans = 0;
    string s;
    cin >> n >> l;
    cin >> s;
    int psize = 2 * n + 1;
    string pn = pstr(n);
    
    for (int i = 0; i < s.size() - psize; i++) {
        if (s.substr(i, psize) == pn) ans++;        
    }

    cout << ans << "\n";
    return 0;
}
