//
//  Hamming Distance.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/19.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x^y, dist = 0;
        while (n) {
            if (1 == (n&1)) {
                dist++;
            }
            n = n >> 1;
        }
        return dist;
    }
};
