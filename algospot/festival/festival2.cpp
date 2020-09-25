//2020-09-25
//https://algospot.com/judge/problem/read/FESTIVAL

#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using i64 = long long int;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int c, n, l;   
    cin >> c;
    for (int t = 0; t < c; t++) {
        cin >> n >> l;
        vector<int> cost(n);
        double ans = 100.0;
        
        for (int i = 0; i < n; i++) {
            cin >> cost[i];
        }
        
        for (int i = 0; i <= n - l; i++) {
            int sum = 0;            
            for (int j = i, count = 1; j < n; j++, count++) {                
                sum += cost[j];
                if (count >= l) {
                    double avg = (double) sum / count;
                    ans = min(avg, ans);
                }
            }
        }
        printf("%.12f\n", ans);
    }
    return 0;
}