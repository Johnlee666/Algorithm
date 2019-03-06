//
//  Jewels and Stones.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/19.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char> set;
        int count = 0;
        for (int i = 0; i < J.size(); i++) {
            set.insert(J[i]);
        }
        for (int j = 0; j < S.size(); j++) {
            if (set.find(S[j]) != set.end()) {
                count++;
            }
        }
        return count;
    }
};
