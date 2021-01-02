#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
vector<vector<int>> result;
vector<int> buffer;

void combination(int offset, int r) {
    if (r == 0) {
        vector<int> temp = buffer;
        result.push_back(temp);
        return;
    }

    for (int i = offset; i <= a.size() - r; i++) {
        buffer.push_back(a[i]);
        combination(offset + 1, r - 1);
        buffer.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    combination(0, 10);  
    for (auto v: result) {
        for (auto i: v) {
            cout << i << " ";
        }
        cout << "\n";
    }    
    return 0;
}