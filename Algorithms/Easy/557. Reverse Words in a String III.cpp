#include "../includes.h"

class Solution {
public:
    string reverseWords(string& s) {
        int i = 0;
        for (int j = 0; j < s.size(); ++j) {
            if (s[j] == ' ') {
                reverse(s.begin() + i, s.begin() + j);
                i = j + 1;
            }
        }
        reverse(s.begin() + i, s.end());
        return s;
    }
};

int main() {
    Solution Solution;

    vector<char> arr = {'h','e','l','l','o'};

    string str = "Let's take LeetCode contest";

    cout << Solution.reverseWords(str);
}