#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

int cnt = 0;

using namespace std;

void hanoi(int num, int src, int target) {
    if (num == 1) {        
        printf("%d %d\n", src, target);
        return;
    }
    int other = 6 - src - target;
    hanoi(num - 1, src, other);
    printf("%d %d\n", src, target);
    hanoi(num - 1, other, target);
}


int main() {
    int n;
    bool print = false;
    cin >> n;

    //get 2^n - 1 (bigint)
    string s = to_string(pow(2, n));
    int idx = s.find('.');
    s = s.substr(0, idx);
    s[s.length() - 1] -= 1;
    
    cout << s << endl;
    
    if (n <= 20) {
        hanoi(n, 1, 3);
    }    
    return 0;
}
