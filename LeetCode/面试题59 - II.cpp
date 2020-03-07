class MaxQueue {
public:
    queue<int> q;
    deque<int> dq; //维护一个单调递减队列

    MaxQueue() {

    }
    
    int max_value() {
        if(dq.empty()) return -1;
        return dq.front();
    }
    
    void push_back(int value) {
        while(!dq.empty() && value>dq.back()){
            dq.pop_back();
        }
        dq.push_back(value);
        q.push(value);
    }
    
    int pop_front() {
        if(q.empty()) return -1;
        int v=q.front();
        q.pop();
        if(v==dq.front()) dq.pop_front();
        return v;
    }
};

/**
 * Your MaxQueue object will be instantiated and called as such:
 * MaxQueue* obj = new MaxQueue();
 * int param_1 = obj->max_value();
 * obj->push_back(value);
 * int param_3 = obj->pop_front();
 */
