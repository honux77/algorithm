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
    printf("%d %d %d\n", r, c, size);
    if (size == 1) {
        return;
    }

    int half = size / 2;
    int dr = 0;
    int dc = 0;

    int hr = r + half;
    int hc = c + half;
    
    if (gr < hr && gc >= hc) {
        ncount += half * half;         
        dc = half;       
    }

    if (gr >= hr && gc < hc) {
        ncount += half * half * 2;        
        dr = half;
    }

    if (gr >= hr && gc >= hc) {
        ncount += half * half * 3;
        dr = half;
        dc = half;
    }

    z(r + dr, c + dc, half);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n >>  gr >> gc;
    int w = (1 << n);
    
    z(0, 0, w);
    cout << ncount << endl;
    return 0;
}
