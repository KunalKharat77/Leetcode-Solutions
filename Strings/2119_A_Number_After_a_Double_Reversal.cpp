// 2119_A_Number_After_a_Double_Reversal.cpp

class Solution {
public:
    bool isSameAfterReversals(int num) {
        return num == 0 || num % 10 != 0;
    }
};