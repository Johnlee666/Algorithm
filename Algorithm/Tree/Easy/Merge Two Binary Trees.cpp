//
//  Merge Two Binary Trees.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/19.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
//Using Recursion
//class Solution {
//public:
//    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
//        TreeNode *p = t1?:t2;
//        if (t1 && t2) {
//            p->val = t1->val + t2->val;
//            p->left = mergeTrees(t1->left, t2->left);
//            p->right = mergeTrees(t1->right, t2->right);
//        }
//        return p;
//    }
//};

//Iterative Method
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if (t1 == nullptr) {
            return t2;
        }
        stack<vector<TreeNode *>>stack;
        stack.push({t1,t2});
        while (!stack.empty()) {
            vector<TreeNode *> t = stack.top();
            stack.pop();
            if (t[0] == nullptr || t[1] == nullptr) {
                continue;
            }
            t[0]->val += t[1]->val;
            if (t[0]->left == nullptr) {
                t[0]->left = t[1]->left;
            } else {
                stack.push({t[0]->left,t[1]->left});
            }
            if (t[0]->right == nullptr) {
                t[0]->right = t[1]->right;
            } else {
                stack.push({t[0]->right, t[1]->right});
            }
        }
        return t1;
        
    }
};
