//
//  Palindrome Linked List.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/20.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
//class Solution {
//public:
//    bool isPalindrome(ListNode* head) {
//        vector<int> v1;
//        vector<int> v2;
//        while (head) {
//            v1.push_back(head->val);
//            v2.push_back(head->val);
//            head = head->next;
//        }
//        reverse(v1.begin(), v1.end());
//        for (int i = 0; i < v1.size()/2; i++) {
//            if (v1[i] != v2[i]) {
//                return false;
//            }
//        }
//        return true;
//    }
//};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL) {
            return true;
        }
        ListNode *otail = NULL;
        otail = new ListNode(head->val);
        ListNode *p = head;
        ListNode *ohead = NULL;
        while (p->next != NULL) {
            p = p->next;
            ohead = new ListNode(p->val);
            ohead->next = otail;
            otail = ohead;
        }
        ListNode *pa = head;
        ListNode *pb = ohead;
        while (pa->next != NULL && pa->val == pb->val) {
            pa = pa->next;
            pb = pb->next;
        }
        if (pa->next != NULL) {
            return false;
        }
        return true;
    }
};
