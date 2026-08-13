// 0128_Longest_Consecutive_Sequence.cpp

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        if (nums.empty())
            return 0;

        int currentlength = 1;
        int maxlength = 1;

        for (int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == nums[i - 1]){
                continue;
            }
            else if (nums[i]-1 == nums[i - 1])
            {
                currentlength++;
            }
            else
            {
                maxlength = max(maxlength, currentlength);
                currentlength = 1;
            }
        }

        maxlength = max(maxlength, currentlength);

        return maxlength;
    }
};