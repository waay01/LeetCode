#include "../includes.h"

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;

        for (int i = 0; i < words.size(); ++i) {
            for (int j = 0; j < words[i].size(); ++j) {
                if (allowed.find(words[i][j]) == string::npos) {
                    ++count;
                    break;
                }
            }
            cout << endl;
        }

        return words.size() - count;
    }
};

int main() {
    Solution Solution;

    string allowed = "cad";
    vector<string> words = {"cc","acd","b","ba","bac","bad","ac","d"};

    cout << Solution.countConsistentStrings(allowed, words);
}