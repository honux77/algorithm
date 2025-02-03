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

template <typename T, typename Pr = less<T>>
using pq = priority_queue<T, vector<T>, Pr>;
using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 산술평균, 중앙값, 최빈값, 범위
    int n, mid, mode, range;
    double avg;
    cin >> n;

    // 입력값 범위 -4000 ~ 4000
    vector<int> a(8001, 0);

    i64 asum = 0;

    // count sort
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x + 4000]++;
        asum += x;
    }

    // 산술 평균
    avg = round((double)asum / n);

    // 중앙값
    int cnt = 0;
    for (int i = 0; i < 8001; i++)
    {
        cnt += a[i];
        if (cnt >= (n + 1) / 2)
        {
            mid = i - 4000;
            break;
        }
    }

    int amax = 0;
    int amin = 8001;
    int mode_count = 0;

    for (int i = 0; i < 8001; i++)
    {
        if (a[i] > 0)
        {
            amin = min(amin, i);
            amax = max(amax, i);
            mode_count = max(mode_count, a[i]);
        }
    }
    range = amax - amin;

    // 최빈값 찾기, 중복될 경우 두번째로 작은 값
    bool find = false;
    for (int i = 0; i < 8001; i++)
    {
        if (a[i] == mode_count)
        {
            if (find)
            {
                mode = i - 4000;
                break;
            }
            else
            {
                find = true;
                mode = i - 4000;
            }
        }
    }

    // -0.0 제거
    if (avg == -0.0)
        avg = 0.0;
    printf("%.0f\n", avg);
    printf("%d\n", mid);
    printf("%d\n", mode);
    printf("%d\n", range);
    return 0;
}
