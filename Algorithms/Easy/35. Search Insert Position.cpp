#include "../includes.h"

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1, index = -1;
        if (nums[nums.size() - 1] < target)
            return nums.size();

        while (low <= high) {
            int mid = low + ((high - low) / 2);

            if (nums[mid] < target) low = mid + 1;
            else if (nums[mid] > target) high = mid - 1;
            else if (nums[mid] == target) {
                index = mid;
                break;
            }
        }

        return (index != -1) ? index : low;
    }
};

int main() {
    Solution Solution;

    vector<int> arr = {-1,3,5,7};

    cout << Solution.searchInsert(arr, 6);
}