//
//  Power of Two.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/13.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
//class Solution {
//public:
//    bool isPowerOfTwo(int n) {
//        if (n < 1) {
//            return false;
//        }
//        while (n % 2 == 0) {
//            n /= 2;
//        }
//        return n == 1;
//    }
//};

//Using n&(n-1) trick
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return !(n&(n-1));
    }
};
