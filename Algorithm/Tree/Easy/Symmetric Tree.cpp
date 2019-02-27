//
//  Symmetric Tree.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/21.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
//Recursive
//class Solution {
//public:
//    bool isSymmetric(TreeNode* root) {
//        return isMirror(root, root);
//    }
//    bool isMirror(TreeNode* left, TreeNode* right) {
//        if (left == nullptr && right == nullptr) {
//            return true;
//        }
//        if (!left || !right) {
//            return false;
//        }
//        return isMirror(left->left, right->right) && isMirror(left->right, right->left) && left->val == right->val;
//    }
//};


//Iterative
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        q.push(root);
        while (!q.empty()) {
            TreeNode* t1 = q.front();
            q.pop();
            TreeNode* t2 = q.front();
            q.pop();
            if (!t1 && !t2) {
                continue;
            }
            if (!t1 || !t2) {
                return false;
            }
            if (t1->val != t2->val) {
                return false;
            }
            q.push(t1->left);
            q.push(t2->right);
            q.push(t1->right);
            q.push(t2->left);
        }
        return true;
    }
};
