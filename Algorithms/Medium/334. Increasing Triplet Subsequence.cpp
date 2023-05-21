#include "includes.h"

class Solution {
public:
    bool increasingTriplet(vector<int> &nums) {
        int left = INT_MAX, right = INT_MAX;

        if (nums.size() < 3)
            return false;

        for (auto &item: nums) {
            if (item <= left)
                left = item;
            else if (item <= right)
                right = item;
            else
                return true;
        }

        return false;
    }
};

int main() {
    Solution Solution;
    vector<int> st = {5, 4, 3, 2, 1};

    cout << Solution.increasingTriplet(st);
}