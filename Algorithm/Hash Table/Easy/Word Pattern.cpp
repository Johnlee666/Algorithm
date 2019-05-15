//
//  Word Pattern.cpp
//  Algorithm
//
//  Created by 李展 on 2019/5/15.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char, string> map;
        unordered_map<string, int> cnt;
        istringstream iss(str);
        for (char c : pattern) {
            if (!(iss >> str)) {
                return false;
            }
            if (map.find(c) == map.end()) {
                if (cnt[str]) {
                    return false;
                } else {
                    map[c] = str;
                    cnt[str]++;
                }
            } else {
                if (map[c] != str) {
                    return false;
                }
            }
        }
        if (iss >> str) {
            return false;
        }
        return true;
    }
};

