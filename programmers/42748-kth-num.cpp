#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> ans;
    for(auto command: commands) {  
        auto i = command[0];
        auto j = command[1];
        auto k = command[2];
        auto start = array.begin() + i - 1;
        auto end = array.begin() + j;
        
        vector<int> sub(start, end);        
        sort(sub.begin(), sub.end());
        ans.push_back(sub[k- 1]);
    }
    return ans;
}
