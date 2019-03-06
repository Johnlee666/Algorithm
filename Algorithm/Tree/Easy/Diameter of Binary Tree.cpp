//
//  Diameter of Binary Tree.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/19.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        if (root) {
            res = treeLength(root->left)+treeLength(root->right);
            return max({diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right),res});
        }
        return res;
    }
    int treeLength(TreeNode *root){
        if (!root) return 0;
        return max(treeLength(root->left), treeLength(root->right))+1;
    }
};
