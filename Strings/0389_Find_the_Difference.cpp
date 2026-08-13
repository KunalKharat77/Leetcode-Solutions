// 0389_Find_the_Difference.cpp

class Solution {
public:
    char findTheDifference(string s, string t) {
        int hash[26] = {0};

        for (char c : s) {
            hash[c - 'a']++;
        }

        for (char c : t) {
            if (hash[c - 'a'] != 0) {
                hash[c - 'a']--;
            } else {
                return c;
            }
        }
        return '\0';
    }
};