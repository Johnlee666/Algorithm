//
//  Longest Common Prefix.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/17.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()== 0) {
            return "";
        }
        if (strs.size() == 1) {
            return strs[0];
        }
        int end = strs[0].size();
        for (int i = 1; i < strs.size(); i++) {
            end = min(end, (int)strs[i].size());
            for (int j = 0; j < end; j++) {
                if (strs[0][j] != strs[i][j]) {
                    end = min(end, j);
                    break;
                }
            }
        }
        return strs[0].substr(0, end);
    }
};
