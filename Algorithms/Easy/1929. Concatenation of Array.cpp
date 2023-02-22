#include "../includes.h"

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        ans.resize(2*n);

        for (int i = 0; i != n; ++i)
            ans[i] = nums[i];

        for (int i = 0; i != n; ++i)
            ans[i+n] = nums[i];

        return ans;
    }
};

int main() {
    Solution Solution;
    vector<int> st = {1,2,1};
    Solution.getConcatenation(st);
}