//
//  Find All Numbers Disappeared in an Array.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/19.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
//class Solution {
//public:
//    vector<int> findDisappearedNumbers(vector<int>& nums) {
//        vector<int> res;
//        set<int> set;
//        for (int i = 0; i < nums.size(); i++) {
//            set.insert(nums[i]);
//        }
//        for (int i = 1; i <= nums.size(); i++) {
//            if (set.find(i) == set.end()) {
//                res.push_back(i);
//            }
//        }
//        return res;
//    }
//};

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size();
        for(int i=0; i<len; i++) {
            int m = abs(nums[i])-1; // index start from 0
            nums[m] = -abs(nums[m]);
        }
        vector<int> res;
        for(int i = 0; i<len; i++) {
            if(nums[i] > 0) res.push_back(i+1);
        }
        return res;
    }
};
