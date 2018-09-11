#include <iostream>
#include <algorithm>

using namespace std; 

class Solution {
public:
    int binaryGap(int N) {        
        int r, idx = 0, ans = 0, prev = 0;
                
        while (N != 0) {        
            idx++;
            r = N % 2;
            N = N / 2;            
            if (r == 1) {
                if (prev == 0) {
                    prev = idx;                    
                } else {                    
                    ans = max(ans, idx - prev);
                    prev = idx;
                }               
            }
        }        
        return ans;
    }
};

int main() {
    int n;
    cin >> n;
    Solution s;
    cout << s.binaryGap(n) << endl;
    return 0;
}