//
//  Middle of the Linked List.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/4.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        vector<ListNode *> res;
        while (head) {
            res.push_back(head);
            head = head->next;
        }
        return res[res.size()/2];
    }
};
