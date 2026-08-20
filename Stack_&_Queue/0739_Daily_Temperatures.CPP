// 0739_Daily_Temperatures.CPP

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> st;
        vector<int> answer(n);

        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && temperatures[st.top()] <= temperatures[i]) {
                st.pop();
            }

            if (st.empty()){
                answer[i] = 0;
            }
            else{
                answer[i] = st.top() - i;
            }

            st.push(i);
        }

        return answer;
    }
};