#include "../includes.h"

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int result = 0;
        for (int i = 0; i != operations.size(); ++i) {
            if (operations[i] == "--X" or operations[i] == "X--") {
                --result;
            }
            else if (operations[i] == "++X" or operations[i] == "X++") {
                ++result;
            }
        }
        return result;
    }
};

int main() {
    Solution Solution;
    vector<string> st = {"--X","X++","X++"};
    Solution.finalValueAfterOperations(st);
}