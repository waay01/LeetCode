#include "../includes.h"

class Solution {
public:
    bool isAnagram(string& s, string& t) {
        int sSize = s.size(), tSize = t.size();
        if(sSize != tSize)
            return false;
        if(sSize == 0)
            return true;

        map<char,int> st1,st2;
        for(int i = 0; i < sSize; ++i)
            st1[s[i]]++;

        for(int i = 0; i < tSize; ++i)
            st2[t[i]]++;

        if(st1 == st2)
            return true;
        else
            return false;
    }
};

int main() {
    Solution Solution;

    string s = "a", t = "ab";

    cout << Solution.isAnagram(s, t);
}