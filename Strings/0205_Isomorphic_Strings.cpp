// 0205_Isomorphic_Strings.cpp

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapS;
        unordered_map<char, char> mapT;

        if(s.length() != t.length()) return false;

        for(int i = 0; i < s.length(); i++){
            auto it = mapS.find(s[i]);
            if(it == mapS.end()){
                mapS[s[i]] = t[i];
            }
            else if(mapS[s[i]] != t[i]){
                return false;
            }
        }

        for(int i = 0; i < t.length(); i++){
            auto it = mapT.find(t[i]);
            if(it == mapT.end()){
                mapT[t[i]] = s[i];
            }
            else if(mapT[t[i]] != s[i]){
                return false;
            }
        }

        return true;
    }
};