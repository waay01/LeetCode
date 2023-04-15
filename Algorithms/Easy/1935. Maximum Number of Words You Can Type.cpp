#include "../includes.h"

class Solution {
public:
    int canBeTypedWords(string& text, string& brokenLetters) {
        unordered_set<char> broken(brokenLetters.begin(), brokenLetters.end());
        int count = 0;
        bool status = true;

        for (char& item : text) {
            if (item == ' ') {
                if (status)
                    ++count;
                status = true;
            }
            else {
                if (broken.count(item) > 0)
                    status = false;
            }
        }

        if (status)
            ++count;

        return count;
    }
};

int main() {
    Solution Solution;

    string text = "hello world", brokenLetters = "ad";

    cout << Solution.canBeTypedWords(text, brokenLetters);
}