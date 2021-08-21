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

int getNum(string &s) {       
    int d = 1; 
    int ret = 0;
    for (int i = s.length() - 1; i >= 0; i--) {
        int t = s[i] -'0';
        if (t >= 5) t--;
        ret += t * d;
        d *= 9;
    }
    return ret;    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);    
    string s;
    cin >> s;    
    cout << getNum(s) << "\n";
    return 0;
}
