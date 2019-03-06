//
//  Move Zeroes.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/19.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                count++;
            } else {
                nums[i-count] = nums[i];
            }
        }
        for (int j = nums.size() - count; j < nums.size(); j++) {
            nums[j] = 0;
        }
    }
};
