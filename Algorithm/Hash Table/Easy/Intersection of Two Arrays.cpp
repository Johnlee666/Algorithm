//
//  Intersection of Two Arrays.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/22.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_set<int> set;
        for (int i = 0; i < nums1.size(); i++) {
            set.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
            if (set.find(nums2[i]) != set.end()) {
                res.push_back(nums2[i]);
                set.erase(nums2[i]);
            }
        }
        return res;
     }
};
