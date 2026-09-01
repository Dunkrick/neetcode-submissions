class MinStack {
private:
    std::stack<int> stack;
    std::stack<int> minStack;

public:
    MinStack() {}
    
    void push(int val) {
        stack.push(val);
        // we compare the value with the top value of minStack and update the minStack.
        val = std::min(val, minStack.empty() ? val : minStack.top());
        minStack.push(val);
    }
    
    void pop() {
        stack.pop();
        minStack.pop();
    }
    
    int top() {
        return stack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
