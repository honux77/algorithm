// http://codeforces.com/contest/1029/problem/D
// 1029 D. Concatenated Multiples

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;
    vector<string> nums;
    int count = 0;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        nums.push_back(s);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            long long x = stoll(nums[i] + nums[j]);
            if (x % k == 0) {
                count++;
            }
        } 
    }

    cout << count << endl;
    return 0;
}