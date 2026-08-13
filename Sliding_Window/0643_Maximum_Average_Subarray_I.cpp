// 0643_Maximum_Average_Subarray_I.cpp

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        double max_sum = 0;
        double avg = 0;

        for (int i = 0; i < k; i++) {
            sum = sum + nums[i];
        }

        max_sum = sum;

        for (int i = k; i < nums.size(); i++) {
            sum += nums[i];
            sum -= nums[i - k];

            max_sum = max(max_sum, sum);
        }

        avg = (double)(max_sum / k);

        return avg;
    }
};