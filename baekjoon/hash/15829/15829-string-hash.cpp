#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;
using ui = unsigned int; 

int main()
{    
    ios_base::sync_with_stdio(false);    
    cin.tie(nullptr);

    ull r = 31;
    ull m = 1234567891;
    
    int n;
    string s;
    cin >> n;
    cin >> s;

    ull ans = 0;
    ull ri = 1;
    for (int i = 0; i < s.size(); i++) {
        int d =  s.at(i) - 'a' + 1;
        ans = (ans + d * ri)  % m; 
        ri = (ri * r) % m;        
    }

    cout << ans << "\n";
    return 0;
}