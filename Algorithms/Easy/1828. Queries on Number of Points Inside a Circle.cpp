#include "../includes.h"

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> answer;
        int count;

        for(int i = 0; i < queries.size(); ++i) {
            count = 0;
            for (int j = 0; j < points.size(); ++j) {
                double tmp = sqrt(pow(points[j][0] - queries[i][0],2) + pow(points[j][1] - queries[i][1],2));

                if(tmp <= queries[i][2])
                    ++count;
            }
            answer.emplace_back(count);
        }

        return answer;
    }
};

int main() {
    Solution Solution;
    vector<vector<int>> points = {{1,3}, {3,3}, {5,3}, {2,2}}, queries = {{2,3,1}, {4,3,1}, {1,1,2}};
    Solution.countPoints(points, queries);
}