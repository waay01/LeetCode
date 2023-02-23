#include "../includes.h"

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int tmp = 0, count = 0;
        for (int i = 0; i < sentences.size(); ++i) {
            for (int j = 0; j < sentences[i].size(); ++j)
                if (sentences[i][j] == ' ')
                    ++count;

            if (tmp < count)
                tmp = count;

            count = 0;
        }
        return tmp+1;
    }
};

int main() {
    Solution Solution;
    vector<string> st = {"f", "continue to fight", "continue to win"};
    Solution.mostWordsFound(st);
}