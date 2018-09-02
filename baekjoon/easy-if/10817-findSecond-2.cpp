#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums(3);
    
    cin >> nums[0] >> nums[1] >> nums[2];    
    sort(nums.begin(), nums.end());
    cout << nums[1];
    return 0;        
}
