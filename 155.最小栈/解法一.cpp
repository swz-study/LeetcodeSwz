class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> data;
    stack<int> minstack;
    MinStack() {
    }
    
    void push(int val) {
        data.push(val);
        if(minstack.empty()||val<=minstack.top()){
            minstack.push(val);
        }
    }
    
    void pop() {
        if(data.top() == minstack.top())
            minstack.pop();
        data.pop();
    }
    
    int top() {
        return data.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};
