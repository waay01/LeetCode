#include "../includes.h"

class Solution {
public:
    string restoreString(string s, vector<int> &indices) {
        string str(s);

        for (int i = 0; i < s.size(); ++i) {
            int index = indices[i];
            str[index] = s[i];
        }

        return str;
    }
};

int main() {
    Solution Solution;

    string s = "codeleet";
    vector<int> indices = {4, 5, 6, 7, 0, 2, 1, 3};

    Solution.restoreString(s, indices);
}