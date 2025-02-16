class Solution {
public:
    string decodeMessage(string& key, string& message) {
        char tf[26] = {0};
        int n = key.length();
        char s = 'a';
        for (int i = 0; i < n; i++) {
            int t = key[i] - 'a';
            if (t > -1 && tf[t] == 0)
                tf[t] = s++;
        }
        n = message.length();
        for (int i = 0; i < n; i++)
            if (message[i] != ' ')
                message[i] = tf[message[i] - 'a'];
        return message;
    }
};
