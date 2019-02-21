//
//  Valid Parentheses.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/21.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (char c : s) {
            switch (c) {
                case '{':
                case '[':
                case '(':
                    stack.push(c);
                    break;
                case '}':
                    if (!stack.empty() &&  stack.top() == '{') {
                        stack.pop();
                    } else {
                        return false;
                    }
                    break;
                case ']':
                    if (!stack.empty() && stack.top() == '[' ){
                        stack.pop();
                    } else {
                        return false;
                    }
                    break;
                case ')':
                    if (!stack.empty() && stack.top() == '(') {
                        stack.pop();
                    } else {
                        return false;
                    }
                    break;
            }
        }
        if (stack.empty()) {
            return true;
        } else {
            return false;
        }
    }
};
