#include <iostream>
#include <cstdio>

int cnt = 0;

using namespace std;

void hanoi(int num, int src, int target) {
    if (num == 1) {        
        printf("%d %d", src, target);
        return;
    }
    int other = 6 - src - target;
    hanoi(num - 1, src, other);
    printf("%d %d", src, target);
    hanoi(num - 1, other, target);
}


int main() {
    int n;
    bool print = false;
    cin >> n;
    int ans = (int) pow(2, n) - 1;
    cout << ans << endl;
    if (n <= 20) {
        hanoi(n, 1, 3);
    }    
    return 0;
}
