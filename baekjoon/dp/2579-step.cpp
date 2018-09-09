//https://www.acmicpc.net/problem/2579

#include <iostream>
#include <algorithm>

int a[301];
int d[301];

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {        
        cin >> a[i];
    }

    d[1] = a[1];
    d[2] = a[1] + a[2];

    for (int i = 3; i <= n; i++) {
        d[i] = a[i] + max(a[i - 1] + d[i -3], d[i - 2]);
    }

    cout << d[n] << endl;
    return 0;
}
