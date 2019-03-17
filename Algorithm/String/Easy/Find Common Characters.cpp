//
//  Find Common Characters.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/16.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<string> res;
        int m[26] = {0};
        for (char c : A[0]) {
            m[c-'a']++;
        }
        for (int i = 1; i < A.size(); i++) {
            int n[26] = {0};
            for (int j = 0; j < A[i].size(); j++) {
                n[A[i][j]-'a']++;
            }
            for (int j = 0; j < 26; j++) {
                if (m[j] != n[j]) {
                    m[j] = min(m[j], n[j]);
                }
            }
        }
        for (int i = 0; i < 26; i++) {
            if (m[i]) {
                for (int j = 0; j < m[i]; j++) {
                    res.push_back(string(1, 'a'+i));
                }
            }
        }
        return res;
    }
};
