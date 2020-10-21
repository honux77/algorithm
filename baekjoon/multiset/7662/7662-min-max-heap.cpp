#include <cstdio>
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;
using ull = long long int;

void solve()
{
    multiset<int> ms;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        char op;
        cin >> op >> num;
        if (op == 'I')
            ms.insert(num);
        else
        {
            if (ms.empty())
                continue;

            if (num == 1)
            {
                //delete max
                ms.erase(--ms.end());
            }
            else
            {
                //delete min
                ms.erase(ms.begin());
            }
        }
    }

    if (ms.empty()) {
        cout << "EMPTY\n";
    } else {
        auto it = ms.end();
        it--;
        cout << *(--ms.end()) << " " << *ms.begin() << "\n";
    }    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }

    return 0;
}