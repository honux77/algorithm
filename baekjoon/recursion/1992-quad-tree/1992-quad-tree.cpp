#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

int a[64][64];

void quad(int r, int c, int n) {
    bool same = true;

    for (int i = r; i < r + n && same; i++) {
        for (int j = c; j < c + n; j++) {
            if (a[i][j] != a[r][c]) {
                same = false;  
                break;              
            }
        }
    }

    if (same) {
        cout << a[r][c];
        return;
    } 
    
    cout << "(";
    int ns = n / 2;
    quad(r, c, ns);
    quad(r, c + ns, ns);
    quad(r + ns, c, ns);
    quad(r + ns, c + ns, ns);
    cout << ")";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    string s;

    for (int i = 0; i < n ; i++) {
        cin >> s;     
        for (int j = 0; j < n; j++) {
            a[i][j] = s[j] - '0';
        }
    }

    quad(0, 0, n);
    cout << "\n";
    return 0;
}