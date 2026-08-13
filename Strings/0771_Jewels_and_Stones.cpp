// 0771_Jewels_and_Stones.cpp

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> set;
        int count = 0;
        for(char c : jewels){
            set.insert(c);
        }

        for(char c : stones){
            if(set.find(c) != set.end()){
                count++;
            }
        }

        return count;
    }
};