#include "../includes.h"

class Solution {
public:
    bool divisorGame(int n) {
        bool alica = true;
        int i = 0, x = 1;

        while (true) {

            if (!(0 < x && x < n)) {
                if (i % 2 == 0)
                    alica = false;

                break;
            }

            if (0 < x && x < n)
                --n;

            ++i;

        }
        return alica;
    }
};

int main() {
    Solution Solution;



    cout << Solution.divisorGame(2);
}