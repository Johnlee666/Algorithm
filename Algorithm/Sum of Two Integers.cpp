//
//  Sum of Two Integers.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/22.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
//runtime error: left shift of negative value -2147483648
//class Solution {
//public:
//    int getSum(int a, int b) {
//        int sum = a;
//        while (b != 0)
//        {
//            sum = a ^ b;//calculate sum of a and b without thinking the carry
//            b = (a & b) << 1;//calculate the carry
//            a = sum;//add sum(without carry) and carry
//        }
//        return sum;
//    }
//};
//

