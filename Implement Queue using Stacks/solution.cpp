class MyQueue {
private:
    stack<int> in;
    stack<int> out;

public:



    MyQueue() {
        
    }
    
    void push(int x) {
        if(in.empty()){
            in.push(x);
        }else{
            while(!in.empty()){
                int t = in.top();
                in.pop();
                out.push(t);
            }
            in.push(x);
            while(!out.empty()){
                int t = out.top();
                out.pop();
                in.push(t);
            }
        }
    }
    
    int pop() {
        int t = in.top();
        in.pop();
        return t;
    }
    
    int peek() {
        return in.top();
    }
    
    bool empty() {
        return in.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */