//
//  Univalued Binary Tree.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/11.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
private:
    int value;
public:
    bool isUnivalTree(TreeNode* root) {
        if (root) {
            value = root->val;
            return dfs(root->left) && dfs(root->right);
        }
        return true;
    }
    bool dfs(TreeNode* root) {
        if (root) {
            return root->val == value && dfs(root->left) && dfs(root->right);
        }
        return true;
    }
};
