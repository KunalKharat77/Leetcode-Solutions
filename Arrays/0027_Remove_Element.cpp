// 0027_Remove_Element.cpp

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0;
        int right = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != val) {
                nums[left] = nums[right];
                left++;
            }
        }
        return left;
    }
};