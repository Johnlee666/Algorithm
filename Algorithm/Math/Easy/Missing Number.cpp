//
//  Missing Number.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/23.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
//class Solution {
//public:
//    int missingNumber(vector<int>& nums) {
//        int res = 0;
//        for (int i = 0; i < nums.size(); i++) {
//            res += i;
//            res -= nums[i];
//        }
//        return res + nums.size();
//    }
//};

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            missing ^= i ^ nums[i];
        }
        return missing;
    }
};
