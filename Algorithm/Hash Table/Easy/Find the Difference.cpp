//
//  Find the Difference.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/24.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    char findTheDifference(string s, string t) {
        int sn[26],tn[26];
        memset(sn, 0, sizeof(int)*26);
        memset(tn, 0, sizeof(int)*26);
        for (int i = 0; i<s.size(); i++) {
            sn[s[i]-'a']++;
            tn[t[i]-'a']++;
        }
        tn[t[s.size()]-'a']++;
        for (int i=0; i<26; i++) {
            if (sn[i] != tn[i]) {
                return 'a'+i;
            }
        }
        return 'a';
    }
};
