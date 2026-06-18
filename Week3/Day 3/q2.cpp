/*
Question: Min Stack (LC 155)
Approach: Two Stacks
Time Complexity: O(1) 
Difficulty: Easy
Concept: Stack
 */

class MinStack {
    stack<int> s;
    stack<int> mins;
public:
    MinStack() { 
    }
    
    void push(int val) {
        s.push(val);
        if(mins.empty() || val<=mins.top())
        {
            mins.push(val);
        }
    }
    
    void pop() {
        if(s.top()==mins.top())
        {
            mins.pop();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return mins.top();
    }
};

