//
//  Merge Two Sorted Lists.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/19.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head = nullptr;
        if (!l1) {
            return l2;
        }
        if (!l2) {
            return l1;
        }
        if (l1->val < l2->val) {
            head = l1;
            l1 = l1->next;
        } else{
            head = l2;
            l2 = l2->next;
        }
        ListNode *p = head;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                p->next = l1;
                l1 = l1->next;
            } else {
                p->next = l2;
                l2 = l2->next;
            }
            p = p->next;
        }
        p->next = l1?:l2;
        return head;
    }
};
