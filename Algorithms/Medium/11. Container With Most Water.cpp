#include "includes.h"

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1, maxL = i, maxR = j, result = 0;

        while (i < j) {
            int tmp = min(height[maxL], height[maxR]) * (j - i);
            result = max(result, tmp);

            if (height[i] < height[j])
                i++;
            else
                j--;

            if (height[i] > height[maxL])
                maxL = i;

            if (height[j] > height[maxR])
                maxR = j;
        }

        return result;
    }
};

int main() {
    Solution Solution;
    vector<int> st = {1,8,6,2,5,4,8,3,7};

    cout << Solution.maxArea(st);
}