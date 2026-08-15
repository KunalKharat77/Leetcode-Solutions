// 1011_Capacity_To_Ship_Packages_Within_D_Days.cpp

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long long low = *max_element(weights.begin(), weights.end());
        long long high = accumulate(weights.begin(), weights.end(), 0LL);
        int ans = high;

        while (low <= high) {
            long long mid = low + ((high - low) / 2);

            int sum = 0;
            int count = 0;
            sum = 0;

            for (int weight : weights) {

                if (sum + weight > mid) {
                    count++;
                    sum = 0;
                }
                sum += weight;
            }

            count++;

            if (count <= days) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};