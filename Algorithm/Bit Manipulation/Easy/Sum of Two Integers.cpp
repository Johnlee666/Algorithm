//
//  Sum of Two Integers.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/22.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int getSum(int a, int b) {
        while (b) {
            int carry = a & b;
            a = a ^ b;
            carry = (carry & ~(1 << 31)) << 1;
            b = carry;
        }
        return a;
    }
};
