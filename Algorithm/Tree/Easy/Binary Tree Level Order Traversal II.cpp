//
//  Binary Tree Level Order Traversal II.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/26.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> queue;
        if (root == nullptr) {
            return result;
        }
        queue.push(root);
        while(!queue.empty()) {
            vector<int> level;
            int size = queue.size();
            for(int i = 0; i < size; i++) {
                TreeNode *p=queue.front();
                queue.pop();
                level.push_back(p->val);
                if(p->left) {
                    queue.push(p->left);
                }
                if(p->right) {
                    queue.push(p->right);
                }
            }
            result.push_back(level);
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
