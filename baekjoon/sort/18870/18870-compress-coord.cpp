#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
using ull = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());

    for (auto &i: a) {
        auto it = lower_bound(b.begin(), b.end(), i);
        cout << distance(b.begin(), it) << " ";
    }
    cout << "\n";

    return 0;
}
