#include <stdio.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include <math.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
#include <string>
#include <bitset>
#include <map>
#include <set>
#include <tuple>
#include <random>
#include <functional>

#define all(x) (x).begin(), (x).end()
#define xx first
#define yy second

using namespace std;

template<typename T, typename Pr = less<T>>
using pq = priority_queue<T, vector<T>, Pr>;
using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    //for each character in the string, check if it is repeated 7 times
    int count = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
            if (count == 7)
            {
                cout << "YES\n";
                return 0;
            }
        }
        else
        {
            count = 1;
        }
    }

    cout << "NO\n";
    
    return 0;
}
