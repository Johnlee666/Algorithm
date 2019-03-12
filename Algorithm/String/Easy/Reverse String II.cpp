//
//  Reverse String II.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/12.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    string reverseStr(string s, int k) {
        int size = s.size();
        for (int i = 0; i < size; i += 2*k) {
            int j = min(i+k-1, size-1);
            while (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};
