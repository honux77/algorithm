// https://www.acmicpc.net/problem/10817
// find second big number

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int s = a + b + c;
    int m = max(max(a, b), c);
    int n = min(min(a, b), c);
    int ans = s - m - n;
    cout << ans << endl;
    return 0;
}
