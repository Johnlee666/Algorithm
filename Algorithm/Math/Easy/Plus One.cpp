//
//  Plus One.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/24.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1] += 1;
        int carry = 0;
        for (int i = (int)digits.size() - 1; i >= 0; i--) {
            digits[i] += carry;
            carry = digits[i]/10;
            digits[i] = digits[i]%10;
        }
        if (carry) {
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};
