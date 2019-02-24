//
//  Contains Duplicate.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/22.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> set;
        for (int i = 0; i < nums.size(); i++) {
            if (set.find(nums[i]) != set.end()) {
                return true;
            }
            set.insert(nums[i]);
        }
        return false;
    }
};
