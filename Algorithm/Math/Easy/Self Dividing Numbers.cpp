//
//  Self Dividing Numbers.cpp
//  Algorithm
//
//  Created by 李展 on 2019/5/16.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for (int i = left; i <= right; i++) {
            int num = i;
            int flag = 0;
            while (num) {
                int n = num%10;
                if (n == 0 || i % n != 0) {
                    flag = 1;
                    break;
                }
                num /= 10;
            }
            if (!flag) {
                res.push_back(i);
            }
        }
        return res;
    }
};
