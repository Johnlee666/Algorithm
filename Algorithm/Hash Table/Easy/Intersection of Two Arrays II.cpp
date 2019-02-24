//
//  Intersection of Two Arrays II.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/23.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> map;
        for (int i = 0; i < nums1.size(); i++) {
            map[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++) {
            if (map[nums2[i]] > 0) {
                map[nums2[i]]--;
                res.push_back(nums2[i]);
            }
        }
        return res;
    }
};
