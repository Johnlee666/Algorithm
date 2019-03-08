//
//  Path Sum II.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/8.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
private:
    vector<vector<int>> res;
    void onePathSum(TreeNode* root, int sum, vector<int> &path) {
        if (!root) {
            return;
        }
        path.push_back(root->val);
        if (root->val == sum && !root->left && !root->right) {
            res.push_back(path);
        }
        onePathSum(root->left, sum-root->val, path);
        onePathSum(root->right, sum-root->val, path);
        path.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> path;
        onePathSum(root, sum, path);
        return res;
    }
};
