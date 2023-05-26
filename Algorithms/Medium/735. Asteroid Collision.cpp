#include "includes.h"

class Solution {
public:
    vector<int> asteroidCollision(vector<int> &asteroids) {
        stack<int> st;
        vector<int> result;

        for (auto &item: asteroids) {
            if (item > 0 || st.empty()) {
                st.push(item);
            } else {
                while (!st.empty() && st.top() > 0 && st.top() < abs(item)) {
                    st.pop();
                }
                if (st.empty() || st.top() < 0) {
                    st.push(item);
                } else if (st.top() == abs(item)) {
                    st.pop();
                }
            }
        }

        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};


int main() {
    Solution Solution;

    vector<int> st = {10, 2, -5};

    Solution.asteroidCollision(st);
}