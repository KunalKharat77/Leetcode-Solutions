// 0875_Koko_Eating_Bananas.cpp


class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1;
        long long high = *max_element(piles.begin(), piles.end());
        long long ans = high;

        while (low <= high) {
            long long mid = low + ((high - low) / 2);

            int count = 0;
            for (int pile : piles) {
                count += (pile + mid - 1) / mid;
                if (count > h)
                    break;
            }
            if (count <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};