//
//  Maximum Depth of Binary Tree.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/17.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root) {
            return 0;
        }
        return max(maxDepth(root->left),maxDepth(root->right)) + 1;
    }
    
};
