#include "../includes.h"

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;

        for (int i = 0; i < stones.size(); ++i) {
            for (int j = 0; j < jewels.size(); ++j) {
                if (stones[i] == jewels[j]) {
                    ++count;
                    continue;
                }
            }
        }
        return count;
    }
};

int main() {
    Solution Solution;
    string jewels = "z", stones = "ZZ";
    Solution.numJewelsInStones(jewels, stones);
}