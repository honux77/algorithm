#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using ull = long long int;

string colors[] = {
    "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"
};
const int csize = 10;

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string, pair<ull, ull>> cmap;
    ull v = 0;
    ull m = 1;
    for (int i = 0; i <= csize; i++) {
        cmap[colors[i]]=  {v, m};
        v++;
        m *= 10;
    }

    string r1, r2, r3;
    cin >> r1 >> r2 >> r3;
    ull ans = 0;
    //cerr << r1 << r2 << r3;
    ans = (cmap[r1].first * 10 + cmap[r2].first) *cmap[r3].second;
    cout << ans << endl;
    return 0;
}