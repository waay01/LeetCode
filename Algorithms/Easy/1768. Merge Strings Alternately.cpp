#include "../includes.h"

class Solution {
public:
    string mergeAlternately(string &word1, string& word2) {
        int size1 = word1.size(), size2 = word2.size();
        string str = "";

        for (int i = 0; i < size1; ++i) {
            str += word1[i];
            if (i < size2)
                str += word2[i];
        }

        if (size1 < size2) {
            for (int i = size1; i < size2; ++i)
                str += word2[i];
        }

        return str;
    }
};

int main() {
    Solution Solution;

    string word1 = "ab", word2 = "pqr";

    cout << Solution.mergeAlternately(word1, word2);
}