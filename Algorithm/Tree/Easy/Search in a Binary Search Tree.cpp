//
//  Search in a Binary Search Tree.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/11.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while (root && root->val != val) {
            if (root->val > val) {
                root = root->left;
            } else {
                root = root->right;
            }
        }
        if (root) {
            return root;
        } else {
            return nullptr;
        }
    }
};
