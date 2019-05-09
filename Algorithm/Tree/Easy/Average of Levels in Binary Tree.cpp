//
//  Average of Levels in Binary Tree.cpp
//  Algorithm
//
//  Created by 李展 on 2019/5/9.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
//class Solution {
//private:
//    vector<double> sum;
//    vector<double> cnt;
//public:
//    vector<double> averageOfLevels(TreeNode* root) {
//        dfs(root, 1);
//        vector<double> res;
//        for (int i = 0; i < sum.size(); i++) {
//            res.push_back(sum[i]/cnt[i]);
//        }
//        return res;
//    }
//    void dfs(TreeNode* node, int level) {
//        if (!node) {
//            return;
//        }
//        if(level > sum.size()) {
//            sum.push_back(0);
//            cnt.push_back(0);
//        }
//        sum[level-1] += node->val;
//        cnt[level-1]++;
//        dfs(node->left, level+1);
//        dfs(node->right, level+1);
//    }
//};

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        if (!root) {
            return res;
        }
        queue<TreeNode*> queue;
        queue.push(root);
        while (!queue.empty()) {
            double sum = 0;
            int size = queue.size();
            for (int i = 0 ; i < size; i++) {
                TreeNode *node = queue.front();
                queue.pop();
                if (node->left) {
                    queue.push(node->left);
                }
                if (node->right) {
                    queue.push(node->right);
                }
                sum += node->val;
            }
            res.push_back(sum/size);
        }
        return res;
    }
};


