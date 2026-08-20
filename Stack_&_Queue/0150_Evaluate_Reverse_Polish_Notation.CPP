// 0150_Evaluate_Reverse_Polish_Notation.CPP

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> st;

        for (int i = 0; i < tokens.size(); i++) {
            string op = tokens[i];
            if (op == "+" || op == "-" || op == "*" ||
                op == "/") {
                int x = st.back();
                st.pop_back();
                int y = st.back();
                st.pop_back();
                if (op == "+") {
                    st.push_back(y + x);
                } else if (op == "-") {
                    st.push_back(y - x);
                } else if (op == "*") {
                    st.push_back(y * x);
                } else {
                    st.push_back(y / x);
                }
            } else {
                st.push_back(stoi(op));
            }
        }

        return st.back();
    }
};