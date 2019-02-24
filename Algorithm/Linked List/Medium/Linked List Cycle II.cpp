//
//  Linked List Cycle II.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/20.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow) {
                fast = head;
                while (true) {
                    fast = fast->next;
                    slow = slow->next;
                    if (fast == slow) {
                        return fast;
                    }
                }
            }
        }
        return nullptr;
    }
};
