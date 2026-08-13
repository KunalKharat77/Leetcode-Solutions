// 0844_Backspace_String_Compare.cpp

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> tt;
        
        for(char c : s){
            if(!st.empty() && c == '#'){
                st.pop();
            }
            else if(c != '#'){
                st.push(c);
            }
        }
        
        for(char c : t){
            if(!tt.empty() && c == '#'){
                tt.pop();
            }
            else if(c != '#'){
                tt.push(c);
            }
        }
        
        if(st.size() != tt.size()) return false;
        
        while(!st.empty()){
            if(st.top() != tt.top()) return false;
            st.pop();
            tt.pop();
        }
        
        return true;
    }
};