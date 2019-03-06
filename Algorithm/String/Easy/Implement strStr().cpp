//
//  Implement strStr().cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/22.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int strStr(string haystack, string needle) {
        int res = -1;
        int m = haystack.length(), n = needle.length();
        if(n==0) return 0;
        for (int i = 0; i<m-n+1; i++) {
            if (haystack[i] == needle[0]) {
                res = i;
                for (int j = 1; j<needle.size(); j++) {
                    if (haystack[i+j] == needle[j]) {
                        continue;
                    }
                    res = -1;
                }
            }
            if (res != -1) break;
        }
        return res;
    }
};

//TODO KMP
