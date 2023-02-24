#include "../includes.h"

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count;
        vector<int> st;

        for (int i = 0; i < nums.size(); ++i) {
            count = 0;
            for (int j = 0; j < nums.size(); ++j) {
                if (nums[i] > nums[j])
                    if (i != j)
                        ++count;
            }
            st.emplace_back(count);
        }
        return st;
    }
};

int main() {
    Solution Solution;
    vector<int> st = {7,7,7,7};
    Solution.smallerNumbersThanCurrent(st);
}