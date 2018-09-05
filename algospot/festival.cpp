//https://algospot.com/judge/problem/read/FESTIVAL

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    double avg, minAvg = 200.0;
    int n, k;
    cin >> n >> k;

    vector<int> cost(n);
    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }

    for (int i = 0; i <= n - k; i++) {
        int sum = 0;        

        for(int j = i, count = 1; j < n; j++, count++) {  
            sum += cost[j];            
            if (count >= k) {
                avg = (double) sum / count;
                minAvg = min(avg, minAvg);
            }
        }
    }
    printf("%.12f\n", minAvg);
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        solve();
    }
    return 0;
}