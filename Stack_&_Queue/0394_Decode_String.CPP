// 0394_Decode_String.CPP

class Solution {
public:
    string decodeString(string s) {
        stack<string> strings;
        stack<int> numbers;
        int num = 0;
        string curr;

        for (int i = 0; i < s.length(); i++) {
            if (isdigit(s[i])) {
                num = (num * 10) + (s[i] - '0');
            }

            else if (s[i] == '[') {
                numbers.push(num);
                num = 0;
                strings.push(curr);
                curr = "";
            }

            else if (s[i] == ']') {
                int k = numbers.top();
                string prev = strings.top();
                string temp;
                while (k > 0) {
                    temp += curr;
                    k--;
                }
                numbers.pop();
                strings.pop();
                curr = prev += temp;
            }

            else {
                curr += s[i];
            }
        }

        return curr;
    }
};