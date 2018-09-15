//https://www.acmicpc.net/problem/2577

#include <iostream>

using namespace std;
int d[10];
int main() {
    int a, b, c, x;
    cin >> a >> b >> c;
    x = a * b * c;

    while(x != 0) {
        d[x % 10]++;
        x /= 10;
    }

    for (int i = 0; i < 10; i++) {
        cout << d[i] << endl;
    }
    return 0;
}