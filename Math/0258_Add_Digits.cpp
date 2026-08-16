// 0258_Add_Digits.cpp

class Solution {
public:
    int addDigits(int num) {
        while (num / 10 != 0)
        {
            int sum = 0;
            while (num != 0)
            {
                int ld = num % 10;
                sum = sum + ld;
                num /= 10;
            }
            num = sum;
        }

        return num;
    }
};