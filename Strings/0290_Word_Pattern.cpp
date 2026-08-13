// 0290_Word_Pattern.cpp

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mapP;
        unordered_map<string, char> mapS;

        stringstream ss(s);
        string word;
        vector<string> words;

        while (ss >> word) {
            words.push_back(word);
        }

        if (words.size() != pattern.length())
            return false;

        for (int i = 0; i < pattern.length(); i++) {
            auto it = mapP.find(pattern[i]);
            if (it == mapP.end()) {
                mapP[pattern[i]] = words[i];
            } else if (mapP[pattern[i]] != words[i]) {
                return false;
            }
        }

        for (int i = 0; i < words.size(); i++) {
            auto it = mapS.find(words[i]);
            if (it == mapS.end()) {
                mapS[words[i]] = pattern[i];
            } else if (mapS[words[i]] != pattern[i]) {
                return false;
            }
        }

        return true;
    }
};