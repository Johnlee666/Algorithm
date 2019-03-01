//
//  Convert Sorted Array to Binary Search Tree.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/1.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return createBST(nums, 0, (int)nums.size()-1);
    }
    TreeNode *createBST(vector<int>& nums, int l, int r) {
        if (l <= r) {
            int m = (l+r)/2;
            TreeNode *res = new TreeNode(nums[m]);
            res->left = createBST(nums, l, m-1);
            res->right = createBST(nums, m+1, r);
            return res;
        }
        return nullptr;
    }
};
