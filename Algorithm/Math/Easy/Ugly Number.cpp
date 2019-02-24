//
//  Ugly Number.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/23.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    bool isUgly(int num) {
        if (num == 0) {
            return false;
        }
        while (num % 5 == 0) {
            num /= 5;
        }
        while (num % 3 == 0) {
            num /= 3;
        }
        while (num %2 == 0) {
            num /= 2;
        }
        return num == 1;
    }
};
