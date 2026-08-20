// 0682_Baseball_Game.CPP

#include <string>
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int total = 0;
        
        for(string s : operations){
            if(s == "D" && st.size() >= 1){
                st.push(st.top()*2);
            }
            else if(s == "C" && st.size() >= 1){
                st.pop();
            }
            else if(s == "+" && st.size() >= 2){
                int num = st.top();
                st.pop();
                int sum = st.top() + num;
                st.push(num);
                st.push(sum);
            }
            else{
                st.push(stoi(s));
            }
        }

        while(!st.empty()){
            total += st.top();
            st.pop();
        }

        return total;
    }
};