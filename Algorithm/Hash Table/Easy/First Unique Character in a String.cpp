//
//  First Unique Character in a String.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/22.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> hash_map;
        for (int i = 0; i < s.size(); i++) {
            hash_map[s[i]]++;
        }
        for (int i = 0; i < s.size(); i++) {
            if (hash_map[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};
