//
//  Binary Tree Level Order Traversal.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/26.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
//BFS
//class Solution {
//public:
//    vector<vector<int>> levelOrder(TreeNode* root) {
//        vector<vector<int>> result;
//        queue<TreeNode*> queue;
//        if (root == nullptr) {
//            return result;
//        }
//        queue.push(root);
//        while(!queue.empty()) {
//            vector<int> level;
//            int size = queue.size();
//            for(int i = 0; i < size; i++) {
//                TreeNode *p=queue.front();
//                queue.pop();
//                level.push_back(p->val);
//                if(p->left) {
//                    queue.push(p->left);
//                }
//                if(p->right) {
//                    queue.push(p->right);
//                }
//            }
//            result.push_back(level);
//        }
//        return result;
//    }
//};

//DFS
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        dfs(root,1,res);
        return res;
    }
    
    void dfs(TreeNode *root,int level,vector<vector<int>> &res) {
        if(!root) return;
        if ((level) > res.size())
            res.push_back(vector<int> {});
        res[level-1].push_back(root->val);
        dfs(root->left,level+1,res);
        dfs(root->right,level+1,res);
    }
};
