//
//  Reverse Bits.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/20.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        for (int i = 0; i < 32; i++) {
            res *= 2;
            if ((n&1) == 1) {
                res += 1;
            }
            n = n >> 1;
        }
        return res;
    }
};
