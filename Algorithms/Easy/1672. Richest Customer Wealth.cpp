#include "../includes.h"

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> result;
        int tmp = 0;

        for(int i = 0; i < accounts.size(); ++i){
            tmp = 0;
            for(int j = 0; j < accounts[i].size(); ++j)
                tmp += accounts[i][j];
            result.emplace_back(tmp);
        }

        for (auto i : result)
            if (tmp < i)
                tmp = i;

        return tmp;
    }
};

int main() {
    Solution Solution;
    vector<vector<int>> st = {{1, 5}, {7, 3}, {3, 5}};
    Solution.maximumWealth(st);
}