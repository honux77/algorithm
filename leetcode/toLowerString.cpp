#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string toLowerCase(string str) {
        for (int i = 0; i <= str.length(); i++) {
            char c = str[i];
            if ( c >= 'A' && c<= 'Z') {
                str[i] += 'a' - 'A';
            }
        }
        return str;
    }
};

int main() {
    Solution s;
    cout << (s.toLowerCase("HeLLO") == "hello") << endl;
    return 0;
}
