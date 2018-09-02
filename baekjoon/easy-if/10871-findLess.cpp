// https://www.acmicpc.net/problem/10871

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, v;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> v;
        if (v < x) {
            cout << v << " ";
        }
    }
    cout << "\n";
    return 0;
}