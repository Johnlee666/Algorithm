//
//  Perfect Number.cpp
//  Algorithm
//
//  Created by 李展 on 2019/5/16.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = num==1?0:1;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                sum += i;
                sum += num/i;
            }
        }
        return sum == num;
    }
};
