#include <cstdio>
#include <iostream>
#include <stack>

using namespace std;
using i64 = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    stack<int> s;
    while(n--) {
        int d;
        cin >> d;
        if (!s.empty() && d == 0) {
            s.pop();
        } else {
            s.push(d);
        }
    }

    int sum = 0;
    while(!s.empty()) {
        sum += s.top();
        s.pop();
    }
    cout << sum << "\n";
    return 0;
}