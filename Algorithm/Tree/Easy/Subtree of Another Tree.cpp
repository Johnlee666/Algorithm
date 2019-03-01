//
//  Subtree of Another Tree.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/21.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"

//Using Preorder Traversal
//class Solution {
//public:
//    bool isSubtree(TreeNode* s, TreeNode* t) {
//        string tree1 = preorder(s, true);
//        string tree2 = preorder(t, true);
//        return tree1.find(tree2) != string::npos;
//    }
//    string preorder(TreeNode *t, bool left) {
//        if (t == nullptr) {
//            if (left) {
//                return "lnull";
//            } else {
//                return "rnull";
//            }
//        }
//        return "#" + to_string(t->val) + preorder(t->left, true) + preorder(t->right, false);
//    }
//};

//By Comparison of Nodes
class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(!s){
            if (!t) {
                return true;
            } else {
                return false;
            }
        }
        if (isSame(s, t)) {
            return true;
        }
        return isSubtree(s->left, t) || isSubtree(s->right, t);
    }
    bool isSame(TreeNode *s, TreeNode *t){
        if (!s && !t) {
            return true;
        }
        else if (!s || !t) {
            return false;
        }
        if (s->val == t->val) {
            return isSame(s->left, t->left) && isSame(s->right, t->right);
        }
        return false;
    }
};
