// 0202_Happy_Number.cpp

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> us;
        int sumofSq = 0;

        while (n != 1)
        {
            while (n != 0)
            {
                int ld = n % 10;
                n = n/10;
                sumofSq = sumofSq + (ld * ld);
            }
            n = sumofSq;
            if(us.find(n) != us.end()){
                return false;
            }

            us.insert(sumofSq);


            sumofSq = 0;
        }
        return true;
    }
};