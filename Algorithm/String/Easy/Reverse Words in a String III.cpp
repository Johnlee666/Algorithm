//
//  Reverse Words in a String III.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/12.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    string reverseWords(string s) {
        string res;
        for (int i = 0; i < s.size(); i++) {
            int begin = i;
            while (s[i] != ' ' && i < s.size()) {
                i++;
            }
            if (s[i] == ' ') {
                for (int j = i - 1; j >= begin; j--) {
                    res += s[j];
                }
                res += ' ';
            }
            if (i == s.size()) {
                for (int j = i - 1; j >= begin; j--) {
                    res += s[j];
                }
            }
        }
        return res;
    }
};
