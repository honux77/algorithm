//https://www.acmicpc.net/problem/1065

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int isHansu(int num) {   
    string s = to_string(num);
    if (s.length() == 1) {
        return 1;
    }
    
    int d = s[1] - s[0];

    for(int i = 1; i < s.length(); i++) {      
        if (s[i] - s[i - 1] != d) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cin >> n; 
    int count = 0;    
    for (int i = 1; i <= n; i++) {        
        count += isHansu(i);
    }    
    cout << count << endl;
    return 0;
}