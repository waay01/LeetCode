#include "../includes.h"

class Solution {
public:
    string interpret(string command) {
        string str = "";
        for (int i = 0; i < command.size(); ++i) {
            if (command[i] == '(' and command[i + 1] == ')') {
                str += 'o';
                continue;
            } else if (command[i] != '(' and command[i] != ')')
                    str += command[i];
        }
        return str;
    }
};

int main() {
    Solution Solution;
    Solution.interpret("(al)G(al)()()G");
}