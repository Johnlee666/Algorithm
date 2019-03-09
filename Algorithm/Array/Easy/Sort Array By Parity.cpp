//
//  Sort Array By Parity.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/9.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
private:
    static bool compare(const int &i, const int &j) {
        return j % 2 > i % 2;
    }
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        sort(A.begin(), A.end(), compare);
        return A;
    }
};
