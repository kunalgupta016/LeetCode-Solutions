class MinStack {
public:

    stack<int> st,s;

    MinStack() {
        
    }
    
    void push(int value) {
        if(s.empty() || s.top()>=value) s.push(value);
        st.push(value);
    }
    
    void pop() {
        if(st.top()==s.top()) s.pop();
        st.pop();
    }
    
    int top() {
        if(st.empty()) return -1;
        return st.top();
    }
    
    int getMin() {
        if(s.empty()) return -1;
        return s.top();
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