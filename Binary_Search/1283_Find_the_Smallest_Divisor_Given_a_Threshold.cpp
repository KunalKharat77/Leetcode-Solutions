// 1283_Find_the_Smallest_Divisor_Given_a_Threshold.cpp

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        long long low = 1;
        long long high = *max_element(nums.begin(), nums.end());
        long long ans = high;

        while (low <= high) {
            long long sum = 0;
            long long mid = low + ((high - low) / 2);

            for (int num : nums) {
                sum += (num + mid - 1) / mid;
            }

            if (sum <= threshold) {
                high = mid - 1;
                ans = mid;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};