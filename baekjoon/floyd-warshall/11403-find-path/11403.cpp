#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;
using ull = long long int;

int a[100][100];
int d[100][100];

const int INF = 54321;

void fw(int n) {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j =0; j < n; j++) {
                if (d[i][k] + d[k][j] < d[i][j]) d[i][j] = d[i][k] + d[k][j];
            }
        }
    }

    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j++) {
            if (d[i][j] < INF) cout<< "1 ";
            else cout << "0 ";
        }
        cout << "\n";
    }  
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) d[i][j] = 1;
            else d[i][j] = INF;            
        }
    }    
    
    fw(n);
    return 0;
}
