//
//  Two Sum IV - Input is a BST.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/24.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
private:
    unordered_map<int, int> map;
public:
    bool findTarget(TreeNode* root, int k) {
        return dfs(root, k);
    }
    bool dfs(TreeNode* root, int k) {
        if (!root) {
            return false;
        }
        if (map[k-root->val]) {
            return true;
        }
        map[root->val]++;
        return dfs(root->left, k) || dfs(root->right, k);
    }
};

//class Solution {
//public:
//    bool findTarget(TreeNode* root, int k) {
//        return dfs(root, root, k);
//    }
//    bool dfs(TreeNode *root, TreeNode *cur ,int k){
//        if (cur == nullptr) {
//            return false;
//        }
//        return search(root, cur, -cur->val+k) || dfs(root, cur->left, k) || dfs(root, cur->right, k);
//
//    }
//    bool search(TreeNode *root, TreeNode *cur , int k ){
//        if (root == nullptr) {
//            return false;
//        }
//        if (root->val == k && root != cur) {
//            return true;
//        }
//        else if(root->val < k){
//            return search(root->right, cur, k);
//        }
//        else{
//            return search(root->left, cur, k);
//        }
//    }
//};

//class Solution {
//public:
//    bool findTarget(TreeNode* root, int k) {
//        vector<int> nums;
//        dfs(root, nums);
//        int low = 0,high = (int)nums.size()-1;
//        while (low<high) {
//            if (nums[low]+nums[high] == k) {
//                return true;
//            }
//            else if(nums[low] + nums[high] > k){
//                high--;
//            }
//            else{
//                low++;
//            }
//        }
//        return false;
//    }
//    void dfs(TreeNode *root, vector<int> &nums){
//        if (root == nullptr) {
//            return;
//        }
//        dfs(root->left, nums);
//        nums.push_back(root->val);
//        dfs(root->right, nums);
//    }
//};
