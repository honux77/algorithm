#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using ull = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, d;

    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> d;
        cout << upper_bound(v.begin(), v.end(), d) - lower_bound(v.begin(), v.end(), d) << " ";
    }
    
    cout << "\n";
    return 0;
}