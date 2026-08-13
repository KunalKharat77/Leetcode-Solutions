// 0904_Fruit_Into_Baskets.cpp

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left = 0;
        int max_count = 0;
        unordered_map<int, int> map;

        for(int right = 0; right < fruits.size(); right++){
            map[fruits[right]]++;
            while(map.size() > 2){
                map[fruits[left]]--;
                if(map[fruits[left]] == 0){
                    map.erase(fruits[left]);
                }
                left++;
            }
            max_count = max(max_count, right - left + 1);
        }

        return max_count;
    }
};