#include "../includes.h"

class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;

        for (char item : moves) {
            switch (item) {
                case 'L': --x; break;
                case 'R': ++x; break;
                case 'U': ++y; break;
                case 'D': --y; break;
            }
        }

        return (x == 0 && y == 0) ? 1:0;
    }
};

int main() {
    Solution Solution;

    cout << Solution.judgeCircle("RLR");
}