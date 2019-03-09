//
//  Squares of a Sorted Array.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/9.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        for (int i = 0; i < A.size(); i++) {
            A[i] *= A[i];
        }
        sort(A.begin(), A.end());
        return A;
    }
};
