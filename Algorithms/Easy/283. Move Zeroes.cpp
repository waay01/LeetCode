#include "../includes.h"

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;

        for (int i = 0; i < nums.size(); ++i)
            if (nums[i] == 0)
                ++count;

        for (int i = 0; i < nums.size(); ++i)
            if (nums[i] == 0) {
                nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
                break;
            }

        for (int i = 0; i < count; ++i)
            nums.push_back(0);
    }
};

int main() {
    Solution Solution;

    vector<int> arr = {1,1,0};

    Solution.moveZeroes(arr);
}