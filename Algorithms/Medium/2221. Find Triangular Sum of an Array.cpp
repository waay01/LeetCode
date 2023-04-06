#include "../includes.h"

class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int i = 0, numsSize = nums.size(), result = 0;
        if (numsSize == 1)
            return nums[0];
        while (numsSize != 1) {
            if (i != numsSize-1) {
                nums[i] = (nums[i] + nums[i + 1]) % 10;
                result = nums[i];
            }
            ++i;
            if (i == numsSize) {
                i = 0;
                --numsSize;
                nums.pop_back();
            }
        }
        return result;
    }
};

int main() {
    Solution Solution;

    vector<int> arr = {5};

    Solution.triangularSum(arr);
}