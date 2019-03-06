//
//  Counting Bits.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/19.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
//class Solution {
//public:
//    vector<int> countBits(int num) {
//        vector<int> res;
//        for (int i = 0; i <= num; i++) {
//            int temp = i;
//            int count = 0;
//            while (temp) {
//                if ((temp&1) == 1) {
//                    count++;
//                }
//                temp = temp >> 1;
//            }
//            res.push_back(count);
//        }
//        return res;
//    }
//};

//dp
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> dp(num+1, 0);
        for (int i = 1; i <= num; i++) {
            dp[i] = dp[i>>1]+(i&1);
        }
        return dp;
    }
};

