//
//  Majority Element II.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/7.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        int count1 = 0;
        int count2 = 0;
        int candidate1 = 0;
        int candidate2 = 0;
        for (int num : nums) {
            if (count1 == 0 || count2 == 0) {
                if (count1 == 0 && num != candidate2) {
                    candidate1 = num;
                } else if (count2 == 0 && num != candidate1) {
                    candidate2 = num;
                }
            }
            if (num == candidate1 || num == candidate2) {
                if (num == candidate1) {
                    count1++;
                    continue;
                } else if(num == candidate2) {
                    count2++;
                    continue;
                }
            }
            count1--;
            count2--;
        }
        count1 = 0;
        count2 = 0;
        for (int num : nums) {
            if (num == candidate1) {
                count1++;
            }
            if (num == candidate2) {
                count2++;
            }
        }
        if (count1 > nums.size()/3) {
            res.push_back(candidate1);
        }
        if (candidate2 != candidate1 && count2 > nums.size()/3) {
            res.push_back(candidate2);
        }
        return res;
    }
};
