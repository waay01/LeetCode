#include "../includes.h"

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        bool status = true;

        while (status) {
            status = false;
            for (int i = heights.size() - 2; i >= 0; --i) {
                if (heights[i] < heights[i + 1]) {
                    swap(heights[i], heights[i+1]);
                    swap(names[i], names[i+1]);

                    status = true;
                }
            }
        }

        return names;
    }
};

//class Solution {
//public:
//    string restoreString(string s, vector<int> &indices) {
//        string str("");
//        bool status = true;
//
//        while (status) {
//            status = false;
//            for (int i = indices.size() - 1; i >= 0; --i) {
//                if (indices[i] < indices[i + 1] && i != indices.size()-1) {
//                    int tmpArr = indices[i];
//                    indices[i] = indices[i + 1];
//                    indices[i + 1] = tmpArr;
//
//                    char tmpChar = s[i];
//                    s[i] = s[i + 1];
//                    s[i + 1] = tmpChar;
//                    status = true;
//                }
//            }
//        }
//
//        for (int i = s.size() - 1; i >= 0; --i)
//            str += s[i];
//
//        return str;
//    }
//};

int main() {
    Solution Solution;

    vector <string> names = {"Mary","John","Emma"};
    vector <int> heights = {180,165,170};

    Solution.sortPeople(names, heights);
}
