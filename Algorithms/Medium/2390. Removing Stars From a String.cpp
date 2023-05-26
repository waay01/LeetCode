#include "includes.h"

class Solution {
public:
    string removeStars(const string &s) {
        stack<char> st;
        string result;

        for (auto &item: s) {
            if (item == '*') {
                st.pop();
                continue;
            }
            st.push(item);
        }

        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());

        return result;
    }
};

int main() {
    Solution Solution;

    Solution.removeStars("leet**cod*e");
}