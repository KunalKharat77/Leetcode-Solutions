// 0153_Find_Minimum_in_Rotated_Sorted_Array.cpp

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int small = INT_MAX;

        if(nums[low] <= nums[high]){
            return nums[low];
        }

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[low] <= nums[mid]) {
                small = min(small, nums[low]);
                low = mid + 1;
            } else {
                small = min(small, nums[mid]);
                high = mid - 1;
            }
        }

        return small;
    }
};