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
    
    int n;
    i64 sum = 0;
    cin >> n;    
    vector<int> a(8001, 0);

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x + 4000] += 1;
        sum += x;
    }

    //산술평균
    printf("%.0lf\n", round((double)sum / n));

    int count = 0;    
    for(int i = 0; i <= 8000; i++)
    {
        if (n > 1 && count < n / 2)
        {
            count += a[i];
        }
        else
        {            
            //중앙값
            if (a[i] > 0) {
                printf("%d\n", i - 4000);            
                break;
            }
        }        
    }

    int cmin = 8000;
    int cmax = 0;
    int min_cnt = n;

    for(int i = 0; i <= 8000; i++){
        if (a[i] > 0) {
            cmin = min(i, cmin);
            cmax = max(i, cmax);            
            min_cnt = min(min_cnt, a[i]);
        }
    }
    
    //또 다른 최빈값이 있는지 확인
    int min_freq = 0;
    for(int i = 0; i <= 8000; i++){
        if (a[i] == min_cnt) {
            if (min_freq == 0) {
                min_freq = i;
            } else {
                min_freq = i;
                break;
            }
        }    
    }

    //최빈값
    //최빈값이 여러개일 경우 두 번째로 작은 값 출력
    printf("%d\n", min_freq - 4000);
    //범위
    printf("%d\n", cmax - cmin);
    
}
