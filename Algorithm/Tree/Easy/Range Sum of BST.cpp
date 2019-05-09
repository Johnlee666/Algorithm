//
//  Range Sum of BST.cpp
//  Algorithm
//
//  Created by 李展 on 2019/5/9.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
private:
    int ans;
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        dfs(root, L, R);
        return ans;
    }
    void dfs(TreeNode* node, int L, int R) {
        if (!node) {
            return;
        }
        if (node->val < L) {
            dfs(node->right, L, R);
        } else if(node->val > R) {
            dfs(node->left, L, R);
        } else {
            ans += node->val;
            dfs(node->left, L, R);
            dfs(node->right, L, R);
        }
    }
};
