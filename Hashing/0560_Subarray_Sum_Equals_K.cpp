// 0560_Subarray_Sum_Equals_K.cpp

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCounts;
        
        prefixSumCounts[0] = 1;
        
        int currentSum = 0;
        int count = 0;
        
        for (int num : nums) {
            currentSum += num;
            
            int target = currentSum - k;
            if (prefixSumCounts.find(target) != prefixSumCounts.end()) {
                count += prefixSumCounts[target];
            }
            
            prefixSumCounts[currentSum]++;
        }
        
        return count;
    }
};