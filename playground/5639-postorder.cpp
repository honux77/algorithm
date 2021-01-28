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

vector<int> a;

void postorder(int root, int size) {        
    int left = root + 1;
    int right = left;
    
    while(right < size && a[right] < a[root]) right++;
    
    if (left < right)
        postorder(left, right);
    
    if (right < size)
        postorder(right, size);
    cout << a[root] << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);  
    
    
    while(!cin.eof()) {
        int x;
        cin >> x;
        a.push_back(x);
    }    

    postorder(0, a.size());
    return 0;
}
