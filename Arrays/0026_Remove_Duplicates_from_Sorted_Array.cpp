// 0026_Remove_Duplicates_from_Sorted_Array.cpp

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != nums[left]) {
                left++;
                nums[left] = nums[right];
                k++;
            }
        }

        return k;
    }
};