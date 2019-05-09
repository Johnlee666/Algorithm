//
//  Array Partition I.cpp
//  Algorithm
//
//  Created by 李展 on 2019/5/6.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int res = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i += 2) {
            res += nums[i];
        }
        return res;
    }
};
