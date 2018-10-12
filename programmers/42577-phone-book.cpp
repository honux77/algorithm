#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> pb) {
    if (pb.size() <= 1) {
        return true;
    }
    sort(pb.begin(), pb.end());

    for (int i = 1; i < pb.size(); i++) {
        if (pb[i - 1] == pb[i].substr(0, pb[i - 1].length())) {
            return false;
        }
    }
    return true;    
}
