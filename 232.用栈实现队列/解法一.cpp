class MyQueue {
private:
    stack<int> a;
    stack<int> b;

public:
    /** Initialize your data structure here. */
    MyQueue() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        a.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int num = 0;
        if(b.empty())
        {
            while(!a.empty()){
                b.push(a.top());
                a.pop();
            }
        }
        if(!b.empty())
        {
            num = b.top();
            b.pop();
        }
        return num;
    }
    
    /** Get the front element. */
    int peek() {
        int num = 0;
        if(b.empty()){
            while(!a.empty())
            {
                b.push(a.top());
                a.pop();
            }
        }
        if(!b.empty())
            num = b.top();
        return num;

    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(a.empty() &&b.empty())
            return true;
        return false;
    }
};
