#include "../includes.h"

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int sizeA = nums.size();
        vector<int> result(sizeA);

        for (int i = 0; i < sizeA; ++i)
            result[i] = pow(nums[i], 2);
        sort(result.begin(), result.end());

        return result;
    }
};

int main() {
    Solution Solution;

    vector<int> nums = {-4,-1,0,3,10};

    Solution.sortedSquares(nums);
}