//
//  Add Two Numbers.cpp
//  LeetCode
//
//  Created by 李展 on 2019/2/11.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        bool first = true;
        ListNode *head = nullptr, *p = nullptr;
        while (l1 || l2 || carry) {
            ListNode *node = new ListNode((l1?l1->val:0) + (l2?l2->val:0) + carry);
            carry = node->val / 10;
            node->val = node->val % 10;
            if (first) {
                head = node;
                p = node;
                first = false;
            } else {
                p->next = node;
                p = p->next;
            }
            if(l1) {
                l1 = l1->next;
            }
            if (l2) {
                l2 = l2->next;
            }
        }
        return head;
    }
};
