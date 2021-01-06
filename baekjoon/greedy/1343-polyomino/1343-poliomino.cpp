#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

string ans = "";

bool append(int xc) {  
    if (xc % 2 != 0) {
        ans = "-1";
        return true;
    }
    while (xc >= 4) {
        ans += "AAAA";
        xc -= 4;
    }
    if (xc == 2) {
        ans += "BB";
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;    
    cin >> s;

    int xc = 0;

    bool no = false;
    for(int i = 0; i < s.length(); i++) {
        if (s[i] =='X') {
            xc++;        
        } else if (s[i] == '.') {            
            no = append(xc);
            if (no) break;
            ans += ".";
            xc = 0;
        }
    } 
    if (!no) append(xc);
    cout << ans << endl;    
    return 0;
}