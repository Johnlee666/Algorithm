//
//  Factorial Trailing Zeroes.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/22.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
//class Solution {
//public:
//    int trailingZeroes(int n) {
//        if (n == 0) {
//            return 0;
//        }
//        return n/5 + trailingZeroes(n/5);
//    }
//};

class Solution {
public:
    int trailingZeroes(int n) {
        int result = 0;
        while (n) {
            n = n/5;
            result += n;
        }
        return result;
    }
};
