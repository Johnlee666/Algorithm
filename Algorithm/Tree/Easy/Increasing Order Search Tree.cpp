//
//  Increasing Order Search Tree.cpp
//  Algorithm
//
//  Created by 李展 on 2019/5/14.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
private:
    vector<TreeNode *> nodes;
public:
    TreeNode* increasingBST(TreeNode* root) {
        inoder(root);
        TreeNode *res = nullptr;
        for (int i = 0; i < nodes.size(); i++) {
            TreeNode *cur = nodes[i];
            if (i == 0) {
                res = cur;
            } else if (i != nodes.size()-1) {
                cur->right = nodes[i+1];
            }
            cur->left = nullptr;
        }
        return res;
    }
    void inoder(TreeNode* root) {
        if (root == nullptr) {
            return;
        }
        inoder(root->left);
        nodes.push_back(root);
        inoder(root->right);
    }
};
