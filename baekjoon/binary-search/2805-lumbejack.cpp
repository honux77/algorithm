#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;
using u64 = unsigned long long int;

u64 cut(vector<int> v, int x) {
  u64 sum  = 0;
  for (auto i: v) {
    if (i > x) {
      sum = sum + (i - x);
    }
  }
  return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    int ans = 0;
    cin >> n >> m;

    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    
    int left = 1;
    int right = 2000000000;
    while (left <= right) {
      int mid = (left + right) / 2;
      u64 c = cut(v, mid);
      //cout << mid << " " << c << " " << m << "\n";
      if (c >= m) {
        ans = max(ans, mid);
        left = mid + 1;
      } else {
        right = mid - 1;
      } 
    }
    
    cout << ans << "\n";
    return 0;
}