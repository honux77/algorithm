//https://www.acmicpc.net/problem/1978

#include <iostream>

using namespace std;
int nums[1001];

void solve() {
    nums[1] = -1;
    for(int i = 2; i <= 1000; i++) {
        if(nums[i] == -1) {
            continue;
        }
        for(int j = i * 2; j <= 1000; j += i) {
            nums[j] = -1;
        }
    }
}

int main() {
    
    solve();
    
    int n, count = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (nums[x] == 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
