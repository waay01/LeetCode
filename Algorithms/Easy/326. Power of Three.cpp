#include "../includes.h"

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0)
            return false;

        while(n % 3 == 0)
            n /= 3;

        return n == 1;
    }
};

int main() {
    Solution Solution;

    cout << Solution.isPowerOfThree(1) << endl;
}
