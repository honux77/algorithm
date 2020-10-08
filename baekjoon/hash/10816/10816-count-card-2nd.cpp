#include <cstdio>
#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;
using ull = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    unordered_map<int, int> m;

    int n, d;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> d;       
        m[d]++;        
    }

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> d;        
        cout << m[d] << " ";        
    }

    cout << "\n";
    return 0;
}