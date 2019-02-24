//
//  Excel Sheet Column Number.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/22.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    int titleToNumber(string s) {
        int res = 0;
        for (int i = 0; i < s.size(); i++) {
            res *= 26;
            res += (s[i] - 'A' + 1);
        }
        return res;
    }
};
