//
//  Maximum Subarray.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/3.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m = INT_MIN;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (sum < 0) {
                sum = 0;
            }
            sum += nums[i];
            m = max(sum,m);
        }
        return m;
    }
};

