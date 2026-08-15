// 0069_Sqrt(x).cpp

class Solution {
public:
    int mySqrt(int x) {
        if(x == 1) return 1;
        long long low = 2;
        long long high = x/2;

        while(low <= high){
            long long mid = low + ((high - low) / 2);
            long long square = mid * mid;

            if(square == x){
                return mid;
            }
            else if(square > x){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return high;
    }
};