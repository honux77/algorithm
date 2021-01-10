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

vector<int> nums;
vector<int> buf;

void _permutations(vector<vector<int>> &a, int i, int j) {

    buf.push_back(a[i][j]); 

    if (i == a.size() - 1 ) {
        int n = 0;
        for (auto i: buf) {
            n += i;
            n *= 10;
        }
        n /= 10;
        nums.push_back(n);
        //cerr << n << endl;    
    } else {
        for (int k = 0; k < a[i + 1].size(); k++) {
            _permutations(a, i + 1, k);
        }
    }
    buf.pop_back();
}

void permutations(vector<vector<int>> &a) {
    for (int i = 0; i < a[0].size(); i++) {
        _permutations(a, 0, i);
    }    
}

vector<int> match(vector<string> &a, int pos) {        
    vector<int> ans;
    for (int k = 0; k <= 9; k++) {
        bool match = true;
        for (int i = 0; i < 5 && match; i++) {
            for (int j = 0; j < 3; j++) {
                if (!(a[i][pos * 4 + j] == '.' || a[i][pos * 4 + j] == d[i][k * 4 + j])) {
                    match = false;                
                }             
            }
        }
        if (match) ans.push_back(k);        
    }
    return ans;
}

//n: input string, size: n
double possbile(vector <string> &a, int n) {
    vector<vector<int>> out;
    for (int i = 0; i < n; i++) {
        out.push_back(match(a, i));
    }   

    permutations(out);
    
    if (nums.empty()) return -1;
    double s = 0;
    for (auto i: nums) s += i;
    return s / nums.size();
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

    double ans = possbile(input, n);
    if (ans == -1) {
        cout << "-1\n";
    } else {
        printf("%f\n", ans);
    }
    
    return 0;
}