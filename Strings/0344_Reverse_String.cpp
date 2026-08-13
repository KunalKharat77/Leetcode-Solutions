// 0344_Reverse_String.cpp

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int left = 0;
        int right = s.size()-1;

        while(left < right){
            int temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }
};