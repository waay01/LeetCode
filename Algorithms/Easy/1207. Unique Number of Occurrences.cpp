#include "includes.h"

class Solution {
public:
    bool uniqueOccurrences(vector<int> &arr) {
        map<int, int> st;

        for (auto &item: arr) {
            auto it = st.find(item);
            if (it != st.end()) {
                it->second++;
                continue;
            }
            st[item] = 1;
        }

        set<int> count;
        for (auto &item: st) {
            if (count.find(item.second) != count.end())
                return false;
            count.insert(item.second);
        }

        return true;
    }
};

int main() {
    Solution Solution;

    vector<int> arr = {26, 2, 16, 16, 5, 5, 26, 2, 5, 20, 20, 5, 2, 20, 2, 2, 20, 2, 16, 20, 16, 17, 16, 2, 16, 20, 26,
                       16};

    cout << Solution.uniqueOccurrences(arr);
}