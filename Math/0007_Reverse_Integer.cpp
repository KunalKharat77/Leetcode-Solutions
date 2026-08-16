// 0007_Reverse_Integer.cpp

class Solution {
public:
    int reverse(int x) {
        long rev = 0;

        // while(x != 0){
        //     if(rev > INT_MAX/10 || rev < INT_MIN/10){
        //         return 0;
        //     }
        //     rev = (rev*10) + (x%10);
        //     x = x/10;
        // }

        while (x != 0) {
            rev = (rev * 10) + (x % 10);
            x /= 10;
        }

        if (rev > INT_MAX || rev < INT_MIN) {
            return 0;
        }
        return rev;
    }
};