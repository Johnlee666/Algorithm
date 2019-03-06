//
//  Binary Tree Inorder Traversal.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/17.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
//recursion

//class Solution {
//public:
//    vector<int> inorderTraversal(TreeNode* root) {
//        vector<int> res;
//        while (root) {
//            res = inorderTraversal(root->left);
//            res.push_back(root->val);
//            inorderTraversal(root->right);
//            vector<int> right = inorderTraversal(root->right);
//            res.insert(res.end(), right.begin(), right.end());
//        }
//        return res;
//    }
//};

//non-recursion(use stack)
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode *> stack;
        while (root || !stack.empty()) {
            while (root) {
                stack.push(root);
                root = root->left;
            }
            root = stack.top();
            stack.pop();
            res.push_back(root->val);
            root = root->right;
        }
        return res;
    }
};
