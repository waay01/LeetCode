#include "../includes.h"

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i = 0, j = n - 1;

        while(i < j) {
            swap(s[i], s[j]);
            ++i;
            --j;
        }

        for (char item : s)
            cout << item << " ";
    }
};

int main() {
    Solution Solution;

    vector<char> arr = {'h','e','l','l','o'};

    Solution.reverseString(arr);
}