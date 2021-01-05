#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

string bigsum(string s1, string s2) {
    if (s1.length() > s2.length()) {
        swap(s1, s2);
    }

    string ans = "";

    int n1 = s1.length(), n2 = s2.length();
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    int c = 0;
    for (int i = 0; i < n1; i++) {
        int sum = s1[i] + s2[i] - '0' * 2 + c; 
        ans.push_back(sum % 10 + '0');
        c = sum / 10;
    }

    for (int i = n1; i < n2; i++) {
        int sum = s2[i] -'0' + c;
        ans.push_back(sum % 10 + '0');
        c = sum / 10;
    }

    if (c != 0) ans.push_back(c + '0');
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string t1, t2;
    cin >> t1 >> t2;
    cout << bigsum(t1, t2) << endl;  

    return 0;
}
