// 1047_Remove_All_Adjacent_Duplicates_In_String.CPP

class Solution {
public:
    string removeDuplicates(string s) {
        string ans;

        for(char c : s){
            if(!ans.empty() && ans.back() == c)
                ans.pop_back();
            else
                ans.push_back(c);
        }

        return ans;
    }
};