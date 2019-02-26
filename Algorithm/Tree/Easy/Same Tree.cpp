//
//  Same Tree.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/24.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p && q) {
            return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        } else if(!p && !q){
            return true;
        } else {
            return false;
        }
    }
};
