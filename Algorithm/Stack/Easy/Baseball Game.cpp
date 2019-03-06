//
//  Baseball Game.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/5.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        int sum = 0;
        for (string str : ops) {
            if (str == "+") {
                int top = s.top();
                s.pop();
                int num = s.top()+top;
                s.push(top);
                s.push(num);
                sum += num;
            } else if(str == "D") {
                int top = s.top();
                s.push(top*2);
                sum += top*2;
            } else if(str == "C") {
                int top = s.top();
                s.pop();
                sum -= top;
            } else {
                int num = stoi(str);
                s.push(num);
                sum += num;
            }
        }
        return sum;
    }
};
