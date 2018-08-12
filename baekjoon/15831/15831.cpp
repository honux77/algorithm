//https://gist.github.com/jwvg0425/36fe5ba810452ada3be7309148db4e56

#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
#include <string>
#include <bitset>
#include <map>
#include <set>
#include <tuple>
#include <string.h>
#include <math.h>
#include <random>
#include <functional>
#include <assert.h>
#include <math.h>
#include <sstream>
#include <iterator>
#include <numeric>

using namespace std;

using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

int main()
{
    int n, b, w;
    scanf("%d %d %d", &n, &b, &w);

    string s;
    cin >> s;

    int bk = 0, wk = 0;
    int ans = 0;

    for(int l = 0, r = 0; r < n; r++)
    {
        if (s[r] == 'W')
            wk++;
        else
            bk++;

        while (bk > b)
        {
           if (s[l] == 'W')
               wk--;
           else
               bk--;
			
           l++;
        }

        if (wk >= w)
           ans = max(ans, r - l + 1);
    }

    printf("%d\n", ans);

    return 0;
}