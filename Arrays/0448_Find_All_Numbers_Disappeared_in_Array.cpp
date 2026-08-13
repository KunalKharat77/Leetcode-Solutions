// 0448_Find_All_Numbers_Disappeared_in_Array.cpp

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> arr;
        for (int num : nums)
        {
            if ((nums[abs(num) - 1]) > 0)
            {
                nums[abs(num) - 1] *= (-1);
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                arr.push_back(i + 1);
            }
        }

        return arr;
    }
};