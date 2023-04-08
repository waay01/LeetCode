#include "includes.h"

class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0, balance = 0;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'L')
                ++balance;
            if (s[i] == 'R')
                --balance;
            if (balance == 0)
                ++count;
        }
        return count;
    }
};

int main() {
    Solution Solution;

    Solution.balancedStringSplit("RLRRRLLRLL");
}