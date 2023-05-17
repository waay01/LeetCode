#include "../includes.h"

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> result(gain.size()+1, 0);
        int max = 0;

        for (int i = 1; i < result.size(); ++i) {
            result[i] = result[i - 1] + gain[i - 1];
            if (max < result[i])
                max = result[i];
        }

        return max;
    }
};

int main() {
    Solution Solution;

    vector<int> st = {-5,1,5,0,-7};

    cout << Solution.largestAltitude(st);
}