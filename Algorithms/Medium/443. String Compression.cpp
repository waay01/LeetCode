#include "includes.h"

class Solution {
public:
    int compress(vector<char> &chars) {
        string str = "";
        int count = 0, size = chars.size();

        for (int i = 0; i < size; ++i) {
            if (i < size - 1 && chars[i] == chars[i + 1]) {
                ++count;
            } else {
                str += chars[i];
                if (count > 1) {
                    str += std::to_string(count);
                }
                count = 1;
            }
        }

        chars.clear();
        for (char item : str)
            chars.emplace_back(item);

        return str.size();
    }
};

int main() {
    Solution Solution;
    vector<char> st = {'a'};

    cout << Solution.compress(st);
}