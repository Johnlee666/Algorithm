//
//  Pascal's Triangle.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/23.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for (int i = 0; i < numRows; i++) {
            vector<int> rows;
            for (int j = 0; j < i; j++) {
                if (j == 0 || j == i - 1) {
                    rows.push_back(1);
                } else {
                    rows.push_back(res[i-1][j-1]+res[i-1][j]);
                }
            }
            res.push_back(rows);
        }
        return res;
    }
};
