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
#include <unordered_set>
#include <set>
#include <map>
#include <stdint.h>
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

using namespace std;
#endif /* Header_h */
