//
//  Linked List Cycle.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/20.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
//Hash Table
//class Solution {
//public:
//    bool hasCycle(ListNode *head) {
//        set<ListNode *> set;
//        while (head) {
//            if (set.find(head) != set.end()) {
//                return true;
//            }
//            set.insert(head);
//            head = head->next;
//        }
//        return false;
//    }
//};


//Two Pointers
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow) {
                return true;
            }
        }
        return false;
    }
};
