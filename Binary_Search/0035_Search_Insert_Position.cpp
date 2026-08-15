// 0035_Search_Insert_Position.cpp

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int pos = nums.size();

        while(low <= high){
            int mid = low + ((high - low)/2);

            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                high = mid - 1;
                pos = high + 1;
            }
            else {
                low = mid + 1;
            }
        }

        return pos;
    }
};