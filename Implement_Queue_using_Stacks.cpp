class MyQueue {
public:
    stack<int> s1, s2;
    MyQueue() {

    }
    void transfer() {
        if (s1.empty()) {
            while (!s2.empty()) {
                s1.push(s2.top());
                s2.pop();
            }
        }
        else {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
    }
    void push(int x) {
        s1.push(x);
    }

    int pop() {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        int ans = s2.top();
        s2.pop();
        transfer();
        return ans;
    }

    int peek() {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        int ans = s2.top();
        transfer();
        return ans;
    }

    bool empty() {
        return s1.empty();
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
