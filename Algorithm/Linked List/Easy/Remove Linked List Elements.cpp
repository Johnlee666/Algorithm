//
//  Remove Linked List Elements.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/24.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head && head->val == val) {
            ListNode *temp = head;
            head = head->next;
            delete temp;
        }
        if (!head) {
            return nullptr;
        }
        ListNode *prev = head;
        ListNode *cur = head->next;
        while (cur) {
            if (cur->val == val) {
                ListNode *temp = cur;
                cur = cur->next;
                prev->next = cur;
                delete temp;
            } else {
                prev = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};
