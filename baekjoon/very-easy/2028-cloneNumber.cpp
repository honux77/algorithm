//https://www.acmicpc.net/submit/2028

#include <iostream>

using namespace std;

void cloneCheck(int x) {
    int x2 = x * x;
    int d1, d2;
    while(x != 0) {
        d1 =  x % 10;
        d2 = x2 % 10;
        
        if (d1 != d2) {
            cout << "NO" << endl; 
            return;
        }

        x /= 10;
        x2 /= 10;       
    }
    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0;i < n; i++) {
        int x;
        cin >> x;
        cloneCheck(x);
    }
    return 0;
}
