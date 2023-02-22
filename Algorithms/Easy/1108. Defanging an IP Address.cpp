#include "../includes.h"

class Solution {
public:
    string defangIPaddr(string address) {
        string str;
        for (int i = 0; i != address.size(); ++i) {
            if (address[i] == '.')
                str += '[';

            str += address[i];

            if (address[i] == '.')
                str += ']';
        }
        return str;
    }
};

int main() {
    Solution Solution;
    Solution.defangIPaddr("1.1.1.1");
}