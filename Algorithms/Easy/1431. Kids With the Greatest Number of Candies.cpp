#include "../includes.h"

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = 0, n = candies.size();
        vector<bool> res (n, false);

        for (int item : candies)
            if (max < item)
                max = item;

        for (int i = 0; i < n; ++i)
            if (candies[i] + extraCandies >= max)
                res[i] = true;

        return res;
    }
};

int main() {
    Solution Solution;

    vector<int> st = {4,2,1,1,2};

    Solution.kidsWithCandies(st, 1);
}