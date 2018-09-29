#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, sum = 0;
    string s;
    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i++) {
        sum += s[i] - '0';
    }
    cout << sum << endl;
    return 0;
}