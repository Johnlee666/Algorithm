//
//  Roman to Integer.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/22.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        unordered_map<char, int> map = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        for (int i = 0; i < s.size() - 1; i++) {
            if (map[s[i]] < map[s[i+1]]) {
                res -= map[s[i]];
            } else {
                res += map[s[i]];
            }
        }
        res += map[s[s.size()-1]];
        return res;
    }
};
