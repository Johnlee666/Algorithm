//
//  Path Sum.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/8.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == nullptr) {
            return false;
        }
        if (root->val == sum && root->left == nullptr && root->right == nullptr) {
            return true;
        }
        return hasPathSum(root->left, sum-root->val) || hasPathSum(root->right, sum-root->val);
    }
};
