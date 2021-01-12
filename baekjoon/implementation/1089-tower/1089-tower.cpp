#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

vector<string> d = {
    "###...#.###.###.#.#.###.###.###.###.###",
    "#.#...#...#...#.#.#.#...#.....#.#.#.#.#",
    "#.#...#.###.###.###.###.###...#.###.###",
    "#.#...#.#.....#...#...#.#.#...#.#.#...#",
    "###...#.###.###...#.###.###...#.###.###"
};

//candidate nums
vector<vector<int>> a;

vector<int> match(vector<string> &s, int pos) {        
    vector<int> ans;
    for (int k = 0; k <= 9; k++) {
        bool match = true;
        for (int i = 0; i < 5 && match; i++) {
            for (int j = 0; j < 3; j++) {
                if (!(s[i][pos * 4 + j] == '.' || s[i][pos * 4 + j] == d[i][k * 4 + j])) {
                    match = false;                
                }             
            }
        }
        if (match) ans.push_back(k);        
    }
    return ans;
}

double avg() {
    if (a.empty()) return -1;
    double ans = 0;
    for(auto &v: a) {
        double sum = 0;
        for (auto i: v) {
            sum += i;
        }
        double avg = sum / v.size();        
        ans += avg;
        ans *= 10;
    }
    return ans / 10;
}

//s: input string, size: n
double solve(vector <string> &s, int n) {
    for (int i = 0; i < n; i++) {
        auto v = match(s, i);
        if (v.empty()) return -1;
        else a.push_back(v);
    }
    return avg();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> input(5);
    for (int i = 0; i < 5; i++) {
        cin >> input[i];
    }
    
    cout.precision(10);
    cout << fixed;
    cout << solve(input, n) << endl;    
    return 0;
}
