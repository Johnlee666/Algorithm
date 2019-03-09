//
//  Sort Array By Parity II.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/9.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int j = 1;
        for (int i = 0; i < A.size(); i += 2) {
            if (A[i] % 2 == 1) {
                while (A[j] % 2 == 1) {
                    j += 2;
                }
                swap(A[i], A[j]);
            }
        }
        return A;
    }
};
