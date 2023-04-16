#include "../includes.h"

class Solution {
public:
    int firstBadVersion(int n) {
        int bad = 1, i = 0;
        while (true) {
            if (isBadVersion(i) == true) {
                bad = i;
                break;
            }
            ++i;
        }
        return bad;
    }
};

int main() {
    Solution Solution;

    vector<int> arr = {-1,0,3,5,9,12};

    cout << Solution.firstBadVersion(5);
}