//
//  Reverse Linked List.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/19.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
//Iterative
//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        ListNode *prev = nullptr;
//        ListNode *curr = head;
//        while (curr != nullptr) {
//            ListNode *next = curr->next;
//            curr->next = prev;
//            prev = curr;
//            curr = next;
//        }
//        return prev;
//    }
//};

//Recursive
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode *p = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return p;
    }
};
