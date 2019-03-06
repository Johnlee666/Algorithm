//
//  Valid Anagram.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/22.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        unordered_map<char, int> map;
        for (int i = 0 ; i < s.size(); i++) {
            map[s[i]]++;
            map[t[i]]--;
        }
        unordered_map<char, int>::iterator iter;
        for (iter = map.begin(); iter != map.end(); iter++) {
            if (iter->second != 0) {
                return false;
            }
        }
        return true;
    }
};
