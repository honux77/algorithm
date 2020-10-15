#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

ui ncount = 0;
int gr = 0;
int gc = 0;

void z(int r, int c, int size) {
    if (size == 2) {
        if ((r == gr || r == gr - 1) && (c == gc || c == gc - 1)) {
            cout << ncount + (gr - r) * 2 + (gc - c) << "\n";
        } else {
            ncount += 4;
        }
        return ;
    }

    int half = size / 2;
    z(r, c, half);
    z(r, c + half, half);
    z(r + half, c, half);
    z(r + half, c + half, half);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n >>  gr >> gc;
    int w = (1 << n);
    
    z(0, 0, w);
    return 0;
}
