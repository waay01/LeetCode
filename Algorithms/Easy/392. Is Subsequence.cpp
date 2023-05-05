#include "../includes.h"

class Solution {
public:
    bool isSubsequence(string s, string t) {

        if (!s.empty() || !t.empty()) {
            int i = 0;
            for (char c : t) {
                if (c == s[i])
                    i++;
                if (i == s.size())
                    return true;
            }
            return false;
        }
        else
            return true;
    }
};

int main() {
    Solution Solution;

    string s = "ab", t = "baab";

    cout << Solution.isSubsequence(s, t);
}