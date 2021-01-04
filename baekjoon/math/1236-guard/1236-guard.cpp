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
    vector<bool> r(n);
    vector<bool> c(m);

    char t;
    int guard = 0;
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            cin >> t;
            if (t == 'X') {
              r[i] = true;
              c[j] = true;  
            }            
        }
    }

    for (int i = 0; i < n ; i++) {
        if (!r[i]) {
            guard++;
            for (int j = 0; j < m; j++) {
                if (!c[j]) {
                    c[j] = true;
                    break;
                }
            }            
        }        
    }

    for (int j = 0; j< m; j++) {
        if (!c[j]) guard++;        
    }    
    
    cout << guard << endl;
    return 0;
}