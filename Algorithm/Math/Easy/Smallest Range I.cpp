//
//  Smallest Range I.cpp
//  Algorithm
//
//  Created by 李展 on 2019/5/16.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int max = A[0], min = A[0];
        for (int i = 0; i < A.size(); i++) {
            max = max>A[i]?max:A[i];
            min = min<A[i]?min:A[i];
        }
        return max-min-2*K>0?max-min-2*K:0;
    }
};
