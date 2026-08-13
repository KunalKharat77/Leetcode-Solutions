// 0167_Two_Sum_II.cpp

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> arr;
        unordered_map<int, int> map;
        
        for(int i = 0; i < numbers.size(); i++){
            map[numbers[i]] = i; 
        }

        for(int left = 0; left < numbers.size() - 1; left++){
            int need = target - numbers[left];
            if(map.find(need) != map.end()){
                arr.push_back(left + 1);
                arr.push_back(map[need] + 1);
                return arr;
            }
        }

        return arr;
    }
};