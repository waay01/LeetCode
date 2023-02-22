#include "../includes.h"

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> nums2;
        vector<int> st;
        for (int i = nums.size()-1; i >= n; --i) {
            nums2.emplace_back(nums[i]);
            nums.pop_back();
        }
        reverse(nums2.begin(), nums2.end());

        for (int i = 0; i != n; ++i){
            st.emplace_back(nums[i]);
            st.emplace_back(nums2[i]);
        }
        return st;
    }
};

int main() {
    Solution Solution;
    vector<int> st = {1,1,2,2};
    Solution.shuffle(st, 2);
}