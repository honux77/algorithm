#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ull a, b;
    cin >> a >> b;
    cout << abs(a - b) << endl;    
    return 0;
}