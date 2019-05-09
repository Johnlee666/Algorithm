//
//  Flipping an Image.cpp
//  Algorithm
//
//  Created by 李展 on 2019/5/6.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for (int i = 0 ; i < A.size(); i++) {
            int l = A[i].size();
            for (int j = 0; j < (l+1)/2; j++) {
                int tmp = !A[i][j];
                A[i][j] = !A[i][l-j-1];
                A[i][l-j-1] = tmp;
            }
        }
        return A;
    }
};
