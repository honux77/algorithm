#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

int match(string &s, int pos, int n, int jmp) {       
    int i = jmp; 
    for (;i < 2 * n + 1; i++) {
        if (i % 2 == 0 && s[pos + i] != 'I') return i;
        if (i % 2 == 1 && s[pos + i] != 'O') return i;        
    }
    return i;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;

    int i = 0;
    int ans = 0;
    int jmp = 0;

    while(i < s.size() - 2 * n + 1) {
        int w = match(s, i, n, jmp);
        if (w == 2 * n + 1) {
            ans++;
            i+= 2;
            jmp = 2 * n - 1;
        } else if (w == 0) {
            i++;
            jmp = 0;            
        } else {
            i+= w;
            jmp = 0;
        }        
    }

    cout << ans << "\n";
    return 0;
}
