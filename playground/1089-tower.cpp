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

//final result
vector<int> nums;
//temp for store num
vector<int> buf;
//candidate num
vector<vector<int>> a;

void _permutations(int i, int j) {
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
            _permutations(i + 1, k);
        }
    }
    buf.pop_back();
}

void permutations() {
    for (int i = 0; i < a[0].size(); i++) {
        _permutations(0, i);
    }    
}

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

//n: input string, size: n
double possbile(vector <string> &s, int n) {
    for (int i = 0; i < n; i++) {
        a.push_back(match(s, i));
    }   

    permutations();
    
    if (nums.empty()) return -1;
    double sum = 0;
    for (auto i: nums) sum += i;
    return sum / nums.size();
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