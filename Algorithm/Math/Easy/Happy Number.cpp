//
//  Happy Number.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/23.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool isHappy(int n) {
        while (n != 1 && n != 4) {
            int sum = 0;
            while (n != 0) {
                sum += (n%10)*(n%10);
                n /= 10;
            }
            n = sum;
        }
        return n==1;
    }
};
