//
//  Longest Substring Without Repeating Characters.cpp
//  LeetCode
//
//  Created by 李展 on 2019/2/11.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count, max = 0;
        for (int i = 0; i < s.size(); i++) {
            unordered_map<char, int> hash_map;
            count = 1;
            hash_map[s[i]]++;
            for (int j = i + 1; j < s.size(); j++) {
                if (!hash_map[s[j]]) {
                    count++;
                    hash_map[s[j]]++;
                } else {
                    break;
                }
            }
            if (count > max) {
                max = count;
            }
        }
        return max;
    }
};

//TODO:Sliding Window
