// 0744_Find_Smallest_Letter_Greater_Than_Target.cpp

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0;
        int high = letters.size() - 1;
        char ans = letters[0];

        while(low <= high){
            int mid = low + ((high - low) / 2);

            if((letters[mid] - 'a') > (target - 'a')){
                ans = letters[mid];
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return ans;
    }
};