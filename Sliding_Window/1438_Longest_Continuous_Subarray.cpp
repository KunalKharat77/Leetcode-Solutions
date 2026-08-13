// 1438_Longest_Continuous_Subarray.cpp

class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> maxdq;
        deque<int> mindq;
        int max_win = 0;
        int left = 0;

        for(int right = 0; right < nums.size(); right++){
            while(!maxdq.empty() && maxdq.back() < nums[right]){
                maxdq.pop_back();
            }
            maxdq.push_back(nums[right]);

            while(!mindq.empty() && mindq.back() > nums[right]){
                mindq.pop_back();
            }
            mindq.push_back(nums[right]);

            while(maxdq.front() - mindq.front() > limit){
                if(maxdq.front() == nums[left]){
                    maxdq.pop_front();
                }
                if(mindq.front() == nums[left]){
                    mindq.pop_front();
                }
                left++;
            }

            max_win = max(max_win, right - left + 1);
        }

        return max_win;
    }
};