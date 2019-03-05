//
//  Backspace String Compare.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/5.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> s1;
        stack<char> s2;
        for (char c : S) {
            if (c != '#') {
                s1.push(c);
            } else {
                if (!s1.empty()) {
                    s1.pop();
                }
            }
        }
        for (char c : T) {
            if (c != '#') {
                s2.push(c);
            } else {
                if (!s2.empty()) {
                    s2.pop();
                }
            }
        }
        while (!s1.empty() && !s2.empty()) {
            if (s1.top() != s2.top()) {
                return false;
            } else {
                s1.pop();
                s2.pop();
            }
        }
        if (s1.empty() && s2.empty()) {
            return true;
        }
        return false;
    }
};
