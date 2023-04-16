#include "../includes.h"

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums[nums.size()-1], index = -1;

        while(left <= right) {
            int mid = left + ((right - left) / 2);
            if (nums[mid] < target) {
                left = mid + 1;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else if (nums[mid] == target) {
                index = mid;
                break;
            }
        }

        return index;
    }
};

int main() {
    Solution Solution;

    vector<int> arr = {-1,0,3,5,9,12};

    cout << Solution.search(arr, 2);
}