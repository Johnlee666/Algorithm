//
//  Binary Tree Inorder Traversal.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/17.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        while (root) {
            res = inorderTraversal(root->left);
            res.push_back(root->val);
            inorderTraversal(root->right);
            vector<int> right = inorderTraversal(root->right);
            res.insert(res.end(), right.begin(), right.end());
        }
        return res;
    }
};

