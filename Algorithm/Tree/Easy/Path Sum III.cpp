//
//  Path Sum III.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/21.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
private:
    int sumUp(TreeNode *root, int pre, int sum){
        if (!root) {
            return 0;
        }
        int cur = pre+root->val;
        return (cur == sum) + sumUp(root->left, cur, sum) + sumUp(root->right, cur, sum);
    }
public:
    int pathSum(TreeNode* root, int sum) {
        if (!root) {
            return 0;
        }
        return sumUp(root, 0, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
    }
};
