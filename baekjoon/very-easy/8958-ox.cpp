#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n ;i++) {
        int total = 0, c = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'O') {
                c++;
                total += c;
            } else {
                c = 0;
            }
        }
        cout << total << endl;
    }
    return 0;
}