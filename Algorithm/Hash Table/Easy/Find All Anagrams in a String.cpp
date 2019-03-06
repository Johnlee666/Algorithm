//
//  Find All Anagrams in a String.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/20.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
// Brute Force
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if (s.size() < p.size()) {
            return res;
        }
        for (int i = 0; i < s.size()-p.size()+1; i++) {
            vector<int> map(26, 0);
            bool flag = false;
            for (int j = 0; j < p.size(); j++) {
                map[p[j] - 'a']++;
                map[s[i+j] - 'a']--;
            }
            for (int j = 0; j < map.size(); j++) {
                if (map[j] != 0) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                res.push_back(i);
            }
        }
        return res;
    }
};

//TODO:Sliding Window
