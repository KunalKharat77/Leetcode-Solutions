// 1493_Longest_Subarray_of_1's_After_Deleting_One_Element.cpp

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0;
        int zeros = 0;
        int max_window = 0;

        for(int right = 0; right < nums.size(); right++){
            if(nums[right] == 0){
                zeros++;
            }

            while(zeros > 1){
                if(nums[left] == 0){
                    zeros--;
                }
                left++;
            }

            max_window = max(max_window, right - left);
        }

        return max_window;
    }
};