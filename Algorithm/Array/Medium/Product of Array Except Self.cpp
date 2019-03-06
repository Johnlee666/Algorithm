//
//  Product of Array Except Self.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/17.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int sum = 1;
        int count = 0;
        unordered_map<int, int> zero;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zero[i]++;
                count++;
            } else {
                sum *= nums[i];
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (count >= 2) {
                res.push_back(0);
            } else if (count == 0) {
                res.push_back(sum/nums[i]);
            } else{
                if (zero[i]) {
                    res.push_back(sum);
                } else {
                    res.push_back(0);
                }
            }
        }
        return res;
    }
};

