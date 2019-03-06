//
//  Number of 1 Bits.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/19.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n) {
            if ((n&1) == 1) {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};
