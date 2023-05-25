#include "../includes.h"

/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low = 1, high = n;

        while (low <= high) {
            int middle = low + (high - low) / 2;
            if (guess(middle) == 0) {
                return middle;
            } else if (guess(middle) == 1) {
                low = middle + 1;
            } else {
                high = middle - 1;
            }
        }
        return low;
    }
};

int main() {
    Solution Solution;

    vector<int> st = {};

    cout << Solution.guessNumber(10);
}