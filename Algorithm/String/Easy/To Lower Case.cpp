//
//  To Lower Case.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/2.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    string toLowerCase(string str) {
        for (int i = 0; i < str.size(); i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] -= 32;
            }
        }
        return str;
    }
};
