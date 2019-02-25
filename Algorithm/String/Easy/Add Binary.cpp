//
//  Add Binary.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/24.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    string addBinary(string a, string b) {
        int len = (int)max(a.size(), b.size());
        string res(len, '0');
        int carry = 0;
        for (int i = len - 1; i >= 0; i--) {
            int ai = i-(int)(len-a.size())<0?0:a[i-(int)(len-a.size())]-'0';
            int bi = i-(int)(len-b.size())<0?0:b[i-(int)(len-b.size())]-'0';
            int num = ai+bi+carry;
            carry = num/2;
            num %= 2;
            res[i] += num;
        }
        if (carry) {
            char last = '0' + carry;
            res.insert(0, 1, last);
        }
        return res;
    }
};
