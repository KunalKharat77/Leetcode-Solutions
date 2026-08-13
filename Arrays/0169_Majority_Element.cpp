// 0169_Majority_Element.cpp

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int key = 0;
        int count = 0;

        for(int num : nums){
            if(count == 0){
                key = num;
            }
            if(num == key){
                count++;
            }
            else{
                count--;
            }
        }

        return key;
    }
};