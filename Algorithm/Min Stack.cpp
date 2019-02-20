//
//  Min Stack.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/20.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class MinStack {
private:
    stack<int> minStack;
    stack<int> s;
public:
    /** initialize your data structure here. */
    MinStack() {
        s = stack<int>();
        minStack = stack<int>();
    }
    
    void push(int x) {
        if (minStack.empty() || x <= minStack.top()) {
            minStack.push(x);
        }
        s.push(x);
    }
    
    void pop() {
        if (s.top() == minStack.top()) {
            minStack.pop();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
