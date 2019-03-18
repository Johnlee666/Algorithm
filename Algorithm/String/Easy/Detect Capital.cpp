//
//  Detect Capital.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/17.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool detectCapitalUse(string word) {
        int flag1 = 0;
        int flag2 = 0;
        if (islower(word[0])) {
            flag1 = 1;
        }
        for (int i = 1; i < word.size(); i++) {
            if (flag1) {
                if (isupper(word[i])) {
                    return false;
                }
            } else {
                if (i == 1 && islower(word[i])) {
                    flag2 = 1;
                    continue;
                }
                if (flag2) {
                    if (isupper(word[i])) {
                        return false;
                    }
                } else {
                    if (islower(word[i])) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
