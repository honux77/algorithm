#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

int white = 0;
int blue = 0;
int a[128][128];

void check(int size, int r, int w) {
    int f = a[r][w];
            
    for (int i = r; i < r + size; i++) {
        for (int j = w; j < w + size; j++) {
            if (a[i][j] != f) {
                int resize = size / 2;
                check(resize, r , w);
                check(resize, r + resize, w);
                check(resize, r , w + resize);
                check(resize, r + resize, w + resize);
                return;
            }
        }
    }

    if (f) blue++;
    else white++;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    check(n, 0, 0);
    cout << white << "\n";
    cout << blue << "\n";
    return 0;
}