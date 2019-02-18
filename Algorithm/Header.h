//
//  Header.h
//  Algorithm
//
//  Created by 李展 on 2019/2/17.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#ifndef Header_h
#define Header_h
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <unordered_map>
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
using namespace std;
#endif /* Header_h */
