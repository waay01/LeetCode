#include "../includes.h"

class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char, char> st;
        char chars[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

        string str, realString;

        for (int i = 0; i < key.size(); ++i) {
            if (key[i] == ' ') {
                key.erase(i, 1);
                if (i != 0)
                    --i;
            }
            if (str.find(key[i]) == string::npos)
                str += key[i];
        }

        for (int i = 25; i >= 0; --i)
            st[str[i]] = chars[i];

        for (int i = 0; i < message.size(); ++i) {
            if (message[i] == ' ') {
                realString += ' ';
                continue;
            }
            realString += st[message[i]];
        }

        cout << key << endl;
        cout << key.size() << endl;
        cout << str << endl;
        cout << str.size() << endl;


        cout << realString;
        return realString;
    }
};

int main() {
    Solution Solution;

    string key = "qcftpglvksvt  lbndahj tvkqzzxjoqwymjhrdsxxritfsrefzmhcadhu", message = "fixyguezthahuegiyddqjxmk fxkhijnyd bakou";

    Solution.decodeMessage(key, message);
}