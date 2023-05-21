#include "../includes.h"

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int countZero = 1, countFlowers = 0, size = flowerbed.size();

        for (int i = 0; i < size; ++i) {
            if (flowerbed[i] == 0) {
                ++countZero;
                if (i == size - 1)
                    countFlowers += countZero / 2;
            } else {
                countFlowers += (countZero - 1) / 2;
                countZero = 0;
            }
        }

        return countFlowers >= n;
    }
};


int main() {
    Solution Solution;

    vector<int> st = {0,0,1,0,1};
    string str = "a good   example";

    cout << Solution.canPlaceFlowers(st, 1);
}