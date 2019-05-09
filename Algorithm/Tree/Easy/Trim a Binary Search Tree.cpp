//
//  Trim a Binary Search Tree.cpp
//  Algorithm
//
//  Created by 李展 on 2019/5/9.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if (!root) {
            return root;
        }
        if (root->val < L) {
            return trimBST(root->right, L, R);
        } else if(root->val > R) {
            return trimBST(root->left, L, R);
        } else {
            TreeNode* left = trimBST(root->left, L, R);
            TreeNode* right = trimBST(root->right, L, R);
            root->left = left;
            root->right = right;
            return root;
        }
    }
};
