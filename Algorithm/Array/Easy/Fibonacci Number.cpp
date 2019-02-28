//
//  Fibonacci Number.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/28.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int fib(int N) {
        if (N == 0) {
            return 0;
        }
        int n = 0;
        int m = 1;
        for (int i = 2; i <= N; i++) {
            int temp = m;
            m = m + n;
            n = temp;
        }
        return m;
    }
};
