class MyStack {
private:
    queue<int> q;
public:
    /** Initialize your data structure here. */
    MyStack() {

    }
    
    /** Push element x onto stack. */
    void push(int x) {
        int size = q.size();
        q.push(x);
        while(size--){
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int popEle = q.front();
        q.pop();
        return popEle;
    }
    
    /** Get the top element. */
    int top() {
        return q.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q.empty();
    }
};
