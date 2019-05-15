//
//  N-Repeated Element in Size 2N Array.cpp
//  Algorithm
//
//  Created by 李展 on 2019/5/15.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int, int> map;
        for (int i : A) {
            map[i]++;
        }
        for (auto j : map) {
            if (j.second == A.size()/2) {
                return j.first;
            }
        }
        return 0;
    }
};
