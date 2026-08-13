// 0713_Subarray_Product_Less_Than_K.cpp

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left = 0;
        long long product = 1;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            product = 1;
            for (int j = i; j < nums.size(); j++) {
                product *= nums[j];
                if (product >= k) {
                    break;
                }
                count++;
            }
        }

        return count;
    }
};