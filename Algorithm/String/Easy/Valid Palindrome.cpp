//
//  Valid Palindrome.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/20.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool isPalindrome(string s) {
        bool res = true;
        for (int i = 0,j = s.size()-1; i<=j; i++, j--) {
            while (!isalnum(s[i]) && i < j) {
                i++;
            }
            s[i] = tolower(s[i]);
            while (!isalnum(s[j]) && i < j) {
                j--;
            }
            s[j] = tolower(s[j]);
            if (s[i] != s[j]) {
                res = false;
                break;
            }
        }
        return res;
    }
};
