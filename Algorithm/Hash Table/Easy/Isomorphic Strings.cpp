
//
//  Isomorphic Strings.cpp
//  Algorithm
//
//  Created by 李展 on 2019/5/15.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> map;
        unordered_map<char, int> cnt;
        for (int i = 0; i < s.size(); i++) {
            char sc = s[i];
            char tc = t[i];
            if (map.find(sc) == map.end()) {
                if (cnt[tc] != 0) {
                    return false;
                } else {
                    map[sc] = tc;
                    cnt[tc]++;
                }
            } else {
                if (map[sc] != tc) {
                    return false;
                }
            }
        }
        return true;
    }
};
