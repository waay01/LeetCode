#include "../includes.h"

class Solution {
public:
    int findPeakElement(vector<int> &nums) {
        int low = 0, max = nums.size() - 1;

        while (low < max) {
            int mid = low + (max - low) / 2;
            if (nums[mid] < nums[mid + 1]) {
                low = mid + 1;
            }
            else max = mid;
        }

        return max;
    }
};

int main() {
    Solution Solution;

    vector<int> spells = {1, 2, 3, 1};

    Solution.findPeakElement(spells);
}