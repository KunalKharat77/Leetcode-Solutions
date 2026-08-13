// 1979_Find_Greatest_Common_Divisor_of_Array.cpp

class Solution {
public:
    int findGCD(std::vector<int>& nums) {
        int min_val = nums[0];
        int max_val = nums[0];
        
        for (int num : nums) {
            min_val = std::min(min_val, num);
            max_val = std::max(max_val, num);
        }
        
        return std::gcd(min_val, max_val);
    }
};