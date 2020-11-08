class MyQueue {
public:
    stack<int> stk1;
    stack<int> stk2;
    
    /** Initialize your data structure here. */
    MyQueue() {
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        int e;
        while(!stk2.empty()){
            e=stk2.top(); stk2.pop();
            stk1.push(e);
        }
        stk1.push(x);
        while(!stk1.empty()){
            e=stk1.top(); stk1.pop();
            stk2.push(e);
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int e;
        e=stk2.top(); stk2.pop();
        return e;
    }
    
    /** Get the front element. */
    int peek() {
        return stk2.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return stk2.empty();
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
