#include <cstdio>
#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;
using ull = long long int;

//http://www.vishalchovatiya.com/using-std-map-wisely-with-modern-cpp/ 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    unordered_map<int, int> m;

    int n, d;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> d;
        if (m[d]) {
            m[d]++;
        } else {
            m[d] = 1;
        }
    }

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> d;
        if (m[d]) {
            cout << m[d] << " ";
        } else {
            cout << "0 ";
        }
    }

    cout << "\n";
    return 0;
}