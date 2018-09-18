//https://www.acmicpc.net/problem/2156

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;    
    cin >> n;
    vector <int> a(n + 1, 0);
    vector <int> d(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a[i] = x;
    }

    d[0] = 0;
    d[1] = a[1];
    d[2] = a[1] + a[2];

    for(int i = 3; i <= n; i++) {
        d[i] = max(d[i - 1], 
                max(a[i] + d[i - 2],
                    a[i] + a[i - 1] + d[i - 3]));         
    } 

    cout << d[n] << endl;
    return 0;
}
