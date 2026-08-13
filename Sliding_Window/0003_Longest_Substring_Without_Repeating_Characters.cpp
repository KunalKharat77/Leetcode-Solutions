// 0003_Longest_Substring_Without_Repeating_Characters.cpp

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int count = 0;
        int max_count = 0;
        unordered_map<char, int> map;

        if (s.empty()) {
            return 0;
        }

        for (int i = 0; i < s.length(); i++) {
            if (map.find(s[i]) != map.end()) {
                left = max(left, map[s[i]] + 1);
            }
            map[s[i]] = i;
            count = i - left + 1;
            max_count = max(max_count, count);
        }

        return max_count;
    }
};