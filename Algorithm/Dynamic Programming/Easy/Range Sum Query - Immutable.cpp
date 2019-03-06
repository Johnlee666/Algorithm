
//
//  Range Sum Query - Immutable.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/4.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class NumArray {
private:
    vector<int> sums;
public:
    NumArray(vector<int> nums) {
        if (nums.size() == 0) {
            return;
        }
        sums = vector<int>(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++) {
            sums[i] = sums[i-1] + nums[i];
        }
    }

    int sumRange(int i, int j) {
        return sums[j+1] - sums[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
