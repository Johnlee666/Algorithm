//
//  Remove Outermost Parentheses.cpp
//  Algorithm
//
//  Created by 李展 on 2019/5/13.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    string removeOuterParentheses(string S) {
        string res;
        stack<char> stack;
        for (auto c : S) {
            switch (c) {
                case '(':
                    if (!stack.empty()) {
                        res.push_back(c);
                    }
                    stack.push(c);
                    break;
                case ')':
                    stack.pop();
                    if (!stack.empty()) {
                        res.push_back(c);
                    }
                    break;
                default:
                    break;
            }
        }
        return res;
    }
};
