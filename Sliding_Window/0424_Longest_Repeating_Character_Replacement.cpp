// 0424_Longest_Repeating_Character_Replacement.cpp

class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int max_frequency = 0;
        int window;
        int max_window = 0;
        int freq[26] = {0};

        for (int right = 0; right < s.length(); right++) {
            freq[s[right] - 'A']++;
            max_frequency = max(max_frequency, freq[s[right] - 'A']);

            if (right - left + 1 - max_frequency > k) {
                freq[s[left] - 'A']--;
                left++;
            }

            max_window = max(max_window, right - left + 1);
        }

        return max_window;
    }
};