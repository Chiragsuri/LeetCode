class CustomStack {
public:
    int maxSize;
    stack<int> s1;

    CustomStack(int maxSize) {
        this->maxSize = maxSize;
    }
    
    void push(int x) {
        if (s1.size() < maxSize) {
            s1.push(x);
        }
    }
    
    int pop() {
        if (s1.empty()) {
            return -1;
        } else {
            int top = s1.top();
            s1.pop();
            return top;
        }
    }
    
    void increment(int k, int val) {
        stack<int> s2;
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        
        int count = 0;
        while (count < k && !s2.empty()) {
            s1.push(s2.top() + val);
            s2.pop();
            count++;
        }
        
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }
};


/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */