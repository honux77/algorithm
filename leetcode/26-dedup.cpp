#include <vector>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1;
        while (i < nums.size()) {
            if (nums[i] == nums[i - 1]) {
                nums.erase(nums.begin() + i);
            } else {
                i++;
            }
        }
        return nums.size();
    }
};
