// 0383_Ransom_Note.cpp

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> map;

        for(char c : magazine){
            map[c]++;
        }

        for(char c : ransomNote){
            if(map.find(c) != map.end()){
                if(map[c] != 0){
                    map[c]--;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }

        return true;
    }
};