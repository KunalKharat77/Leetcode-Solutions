// 0485_Max_Consecutive_Ones.cpp

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left = 0;
        int max_window = 0;

        for(int right = 0; right < nums.size(); right++){
            if(nums[right] == 0){
                left = right + 1;
            }

            max_window = max(max_window, right - left + 1);
        }

        return max_window;
    }
};