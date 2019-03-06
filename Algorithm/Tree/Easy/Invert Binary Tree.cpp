//
//  Invert Binary Tree.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/19.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root) {
            invertTree(root->left);
            invertTree(root->right);
            TreeNode *temp = root->left;
            root->left = root->right;
            root->right = temp;
        }
        return root;
    }
};
