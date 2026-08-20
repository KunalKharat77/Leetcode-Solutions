// 0155_Min_Stack.CPP

class MinStack {
public:
    stack<int> st;
    stack<int> minst;
    
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);
        if(!minst.empty()){
            if(value <= minst.top()){
                minst.push(value);
            }
        }
        else{
            minst.push(value);
        }
    }
    
    void pop() {
        if(!minst.empty()){
            if(st.top() == minst.top()){
                minst.pop();
            }
        }
        st.pop();
    }
    
    int top() {
        if(!st.empty()){
            return st.top();
        }
        return 0;
    }
    
    int getMin() {
        if(!minst.empty()){
            return minst.top();
        }
        return 0;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */