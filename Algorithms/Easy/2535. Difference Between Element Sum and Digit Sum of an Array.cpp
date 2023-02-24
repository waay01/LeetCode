#include "../includes.h"

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int element = 0, digit = 0;
        for (int i = 0; i < nums.size(); ++i) {
            element += nums[i];
            while (nums[i] > 0) {
                int tmp;
                tmp = nums[i] % 10;
                digit += tmp;
                nums[i] /= 10;
            }
        }
        return abs(element - digit);
    }
};

int main() {
    Solution Solution;
    vector<int> st = {1,2,3,4};
    Solution.differenceOfSum(st);
}