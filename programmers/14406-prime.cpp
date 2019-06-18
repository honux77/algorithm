#include <vector>

using namespace std;
using ull=unsigned long long;
long long solution(int n) {
    ull ans = 0;
    vector <bool> p(n + 1, true);
    p[0] = p[1] = false;
    for (int i = 2; i <= n; i++) {
        if (!p[i]) continue;
        ans += i;
        for (int j = i * 2; j <= n; j += i) {
            p[j] = false;
        }
    }
    return ans;
}
