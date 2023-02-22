#include "../includes.h"

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;

        for(auto i : nums)
            ans[i] = nums[nums[i]];

        return ans;
    }
};

int main() {
    Solution Solution;
    vector<int> st = {5,0,1,2,3,4};
    Solution.buildArray(st);
}