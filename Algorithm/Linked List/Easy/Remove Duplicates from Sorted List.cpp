//
//  Remove Duplicates from Sorted List.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/4.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) {
            return nullptr;
        }
        ListNode *prev = head;
        ListNode *cur = head->next;
        while (cur) {
            if (cur->val == prev->val) {
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
