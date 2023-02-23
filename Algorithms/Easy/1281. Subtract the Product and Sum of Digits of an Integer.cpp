#include "../includes.h"

class Solution {
public:
    int subtractProductAndSum(int n) {
        int multi = 1, sum = 0, tmp;
        while (n != 0) {
            tmp = n % 10;
            sum += tmp;
            multi *= tmp;
            n /= 10;
        }
        return multi - sum;
    }
};

int main() {
    Solution Solution;
    Solution.subtractProductAndSum(234);
}