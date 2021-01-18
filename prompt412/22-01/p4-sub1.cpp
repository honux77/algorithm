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
    if (n ==1 ||  m == 1) {
        cout << max(n, m) -2 << endl;
    } else
    {
        cout << 0 << endl;
    }   
    
    return 0;
}